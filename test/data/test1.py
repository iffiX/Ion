#/usr/bin/python3
import sys
import pydotplus
import utils
from trainer import LabelTrainer
from dtree import DecisionTree, DecisionTreeVisualizer
if __name__ == '__main__':
    args = sys.argv
    if len(args) == 1:
        print("usage: main <train_path> <test_path> <test_out_Path>")
        exit(0)
    elif len(args) != 4:
        print("incorrect number of arguments, 3 args are needed, you have {:d}".format(len(args) - 1))
        print("usage: main <train_path> <test_path> <test_out_Path>")
        exit(0)
    train_path = args[1]
    test_path = args[2]
    test_out_path = args[3]
    train_data = utils.load_csv(args[1])
    test_data = utils.load_csv(args[2])

    tree = DecisionTree(method="cart")

    enable_prune = [False]
    def configure(config):
        for k, v in config.items():
            if k in tree.config:
                tree.config[k] = v
        enable_prune[0] = config["prune"]

    def train(x,y):
        tree.train(x, y)
        if enable_prune[0]:
            tree.prune(train_data[:, 0:6], train_data[:, 6], min_gain=0.001)

    trainer = LabelTrainer(data=train_data[:, 0:6],
                           data_labels=train_data[:, 6],
                           labels=(0, 1),
                           parameters={"max_depth": (6, 7, 8, 9),
                                       "min_samples_split": (2, 10, 20),
                                       "min_samples_leaf": (1, 5, 10),
                                       "prune": [False, True]},
                           config_function=configure,
                           train_function=train,
                           predict_function=tree.predict)
    trainer.auto_train(maximize="f1", validation_split_times=1, print_info=True)
    trainer.config_model()
    trainer.train_model()
    tree_visualizer = DecisionTreeVisualizer(tree=tree)
    dot_data = tree_visualizer.visualize()
    tree_visualizer.print()
    graph = pydotplus.graph_from_dot_data(dot_data)
    graph.write_png("output/visualize.png")

    labels = tree.predict(test_data[:, 0:6])
    utils.save_predict(labels, test_out_path)
