from typing import Optional, Mapping, Union, List

import queue as q
import math as m
import numpy as np


class DecisionTreeNode:
    """
    @class DecisionTreeNode
    @brief Basic node component for a binary decision tree
    """

    def __init__(self,
                 depth: Optional[int] = None,
                 branch_type: Optional[bool] = None,
                 parent: Optional["DecisionTreeNode"] = None,
                 label: Optional[Union[int, float, str]] = None,
                 data_column: Optional[int] = None,
                 correct_ratio: Optional[float] = None,
                 results: Optional[np.ndarray] = None,
                 split_threshold: Optional[Union[int, float, str]] = None,
                 split_true_branch: Optional["DecisionTreeNode"] = None,
                 split_false_branch: Optional["DecisionTreeNode"] = None,
                 summary: Optional[Mapping] = None
                 ):
        """
        @brief initializer of DecisionTreeNode
        @param depth: depth of current node
        @param branch_type: which branch current node is on, if current node doesn't have a parent,
        set this to None
        @param parent: parent of current node
        @param label: label of current node (usually the majority of samples), only used if current
        node is a leaf node
        @param data_column: column of data divided by current node
        @param correct_ratio: ratio of dividing correctness
        @param results: divided results from the parent of current node
        @param split_threshold: threshold to split
        @param split_true_branch: child node representing entries above or equals to the threshold
        @param split_false_branch: child node representing entries smaller than or not equals to the
        threshold
        @param summary: summary of current node, needed in visualizing process
        """
        # results from last level classification
        self.depth = depth
        self.branch_type = branch_type
        self.parent = parent
        self.label = label
        self.correct_ratio = correct_ratio
        self.results = results

        # split criteria of current level
        self.disabled = False
        self.data_column = data_column
        self.split_threshold = split_threshold
        self.split_true_branch = split_true_branch
        self.split_false_branch = split_false_branch
        self.summary = summary

    def is_leaf(self) -> bool:
        """
        @return whether current node is a leaf node
        """
        return self.split_true_branch is None and self.split_false_branch is None


class DecisionTree:
    """
    @class DecisionTree
    @brief class to construct and manage a binary decision tree
    """

    def __init__(self,
                 method="cart",
                 max_depth=np.inf,
                 max_leaf_nodes=np.inf,
                 min_samples_split=2,
                 min_samples_leaf=1,
                 min_impurity_decrease=0.0) -> None:
        method = method.lower()
        self.config = dict(method=method,
                           max_depth=max_depth,
                           max_leaf_nodes=max_leaf_nodes,
                           min_samples_split=min_samples_split,
                           min_samples_leaf=min_samples_leaf,
                           min_impurity_decrease=min_impurity_decrease)
        self.status = dict(depth=0,
                           leaf_nodes_num=0)
        self.x = np.ndarray
        self.y = np.ndarray
        self.root = DecisionTreeNode(data_column=-1, results=None)
        if method == "cart":
            self._score_method = self._cal_gini
        elif method in ("id3", "cd4.5"):
            self._score_method = self._cal_entropy
        else:
            raise ValueError("method should be 'id3', 'c4.5' or 'cart'")

    def train(self,
              x: np.ndarray,
              y: np.ndarray) -> None:
        """
        @brief create a decision tree to divide the dataset
        @param x: atrributes of entries
        @param y: labels of entries
        """
        self.x = x
        self.y = y
        # create the root node of tree
        self.root = DecisionTreeNode(depth=1,
                                     data_column=-1,
                                     results=np.arange(0, self.x.shape[0]),
                                     split_threshold=None,
                                     split_true_branch=None,
                                     split_false_branch=None)
        self.status["leaf_nodes_num"] = 1
        self._fit_recursion(self.root, 1)

    def prune(self,
              validation_x: np.ndarray,
              validation_y: np.ndarray,
              min_gain=0.0):
        """
        @brief an implementation of reduced error pruning
        @param validation_x: attributes of validation set
        @param validation_y: labels of validation set
        @param min_gain: minimal gain of a branch
        """
        self._prune_recursion(self.root, validation_x, validation_y, min_gain)

    def predict(self,
                predict_x: np.ndarray) -> np.ndarray:
        """
        @brief classifies the observations according to the tree.
        @param predict_x: attributes of test data to be predicted
        """
        result = np.zeros(predict_x.shape[0], self.y.dtype)
        for idx in range(0, predict_x.shape[0]):
            current_node = self.root
            while not current_node.is_leaf():
                attr_val = predict_x[idx, current_node.data_column]
                if isinstance(attr_val, str):
                    if attr_val == current_node.split_threshold:
                        current_node = current_node.split_true_branch
                    else:
                        current_node = current_node.split_false_branch
                else:
                    if attr_val >= current_node.split_threshold:
                        current_node = current_node.split_true_branch
                    else:
                        current_node = current_node.split_false_branch
            result[idx] = current_node.label
        return result

    def get_tree(self):
        return self.root

    def _validate(self,
                  validation_x: np.ndarray,
                  validation_y: np.ndarray) -> float:
        correct_count = 0
        for idx in range(0, validation_x.shape[0]):
            current_node = self.root
            while not current_node.is_leaf() and not current_node.disabled:
                attr_val = validation_x[idx, current_node.data_column]
                if isinstance(attr_val, str):
                    if attr_val == current_node.split_threshold:
                        current_node = current_node.split_true_branch
                    else:
                        current_node = current_node.split_false_branch
                else:
                    if attr_val >= current_node.split_threshold:
                        current_node = current_node.split_true_branch
                    else:
                        current_node = current_node.split_false_branch
            if current_node.label == validation_y[idx]:
                correct_count += 1
        return correct_count * 1.0 / validation_x.shape[0]

    def _fit_recursion(self,
                       node: DecisionTreeNode,
                       depth: int) -> None:
        best_gain = 0.0
        best_threshold = None
        best_attribute = -1
        best_sets = None

        col_count = self.x.shape[1]
        if depth >= self.config["max_depth"] or \
           node.results.shape[0] < self.config["min_samples_split"] or \
           np.unique(self.y[node.results]).shape[0] == 1:
            # finished, assign label according to majority
            labels = self.y.take(node.results)
            v, c = np.unique(labels, return_counts=True)
            idx = np.argmax(c)
            node.label = v[idx]
            node.correct_ratio = c[idx] * 1.0 / node.results.shape[0]
            node.summary = {'impurity': '%.3f' % self._score_method(node.results),
                            'samples': '%d' % node.results.shape[0]}
            return
        else:
            self.status["depth"] = max(self.status["depth"], depth)

        current_score = self._score_method(node.results)

        # iterate all features to find the best to split on
        for col in range(0, col_count):
            uni_col_values = np.unique(self.x[node.results, col])
            # find the best division threshold
            for value in uni_col_values:

                # divide results from last level into new sets
                if isinstance(value, str):
                    criteria = lambda s: s == value
                else:
                    criteria = lambda v: v >= value
                (set1, set2) = self._divide(col, node.results, criteria)

                if set1.shape[0] < self.config["min_samples_leaf"] \
                        or set2.shape[0] < self.config["min_samples_leaf"]:
                    # too little samples in a leaf
                    continue

                p = float(set1.shape[0]) / node.results.shape[0]
                # calculate gain -- Entropy or Gini
                gain = 0.0
                if self.config["method"] in ("cart", "id3"):
                    gain = current_score - \
                           p * self._score_method(set1) - \
                           (1 - p) * self._score_method(set2)
                elif self.config["method"] == "c4.5":
                    gain_score = current_score - \
                                 p * self._score_method(set1) - \
                                 (1 - p) * self._score_method(set2)
                    gain = gain_score / (- p * m.log2(p) - (1 - p) * m.log2(1 - p))

                if gain > best_gain and gain >= self.config["min_impurity_decrease"]:
                    best_gain = gain
                    best_attribute = col
                    best_sets = (set1, set2)
                    best_threshold = value

        if best_gain > 0:
            self.status["leaf_nodes_num"] += 1
            node.split_true_branch = DecisionTreeNode(depth=depth + 1,
                                                      branch_type=True,
                                                      parent=node,
                                                      data_column=best_attribute,
                                                      results=best_sets[0])
            node.split_false_branch = DecisionTreeNode(depth=depth + 1,
                                                       branch_type=False,
                                                       parent=node,
                                                       data_column=best_attribute,
                                                       results=best_sets[1])
            self._fit_recursion(node.split_true_branch, depth + 1)
            self._fit_recursion(node.split_false_branch, depth + 1)
            node.correct_ratio = \
                node.split_true_branch.correct_ratio * best_sets[0].shape[0] / node.results.shape[0] + \
                node.split_false_branch.correct_ratio * best_sets[1].shape[0] / node.results.shape[0]
            node.data_column = best_attribute
            node.split_threshold = best_threshold
            node.summary = {'impurity': '%.3f' % current_score, 'samples': '%d' % node.results.shape[0]}
        else:
            # failed to split current node, assign label according to majority
            labels = self.y.take(node.results)
            v, c = np.unique(labels, return_counts=True)
            idx = np.argmax(c)
            node.label = v[idx]
            node.correct_ratio = c[idx] * 1.0 / node.results.shape[0]
            node.summary = {'impurity': '%.3f' % self._score_method(node.results),
                            'samples': '%d' % node.results.shape[0]}
            return


    def _prune_recursion(self,
                         node: DecisionTreeNode,
                         validation_x: np.ndarray,
                         validation_y: np.ndarray,
                         min_gain: float) -> None:
        if node.is_leaf():
            return
        # prune each branch recursively
        if node.split_true_branch is not None:
            self._prune_recursion(node.split_true_branch, validation_x, validation_y, min_gain)
        if node.split_false_branch is not None:
            self._prune_recursion(node.split_false_branch, validation_x, validation_y, min_gain)

        # predict results according to current validation set
        old_score = self._validate(validation_x, validation_y)

        # merge leaves
        if node.split_true_branch is not None and node.split_true_branch.is_leaf() and \
                node.split_false_branch is not None and node.split_false_branch.is_leaf():

            # temporarily disable current node and assign a label(equal to merging leaves)
            node.disabled = True
            labels = self.y.take(node.results)
            v, c = np.unique(labels, return_counts=True)
            idx = np.argmax(c)
            node.label = v[idx]

            new_score = self._validate(validation_x, validation_y)
            delta = old_score - new_score
            if delta < min_gain:
                # merge leaves, calculate correct ratio etc.
                node.disabled = False
                node.correct_ratio = c[idx] * 1.0 / node.results.shape[0]
                node.split_true_branch = None
                node.split_false_branch = None
                node.split_threshold = None
                node.summary = node.summary = {'impurity': '%.3f' % self._score_method(node.results),
                                               'samples': '%d' % node.results.shape[0]}
            else:
                node.disabled = False
                node.label = None

    def _divide(self,
                column: int,
                selector: np.ndarray,
                criteria):
        """
        @brief divide an attribute with the specified value
        @param column: attribute to be divided
        @param selector: indexes of rows to be used
        @param criteria: divide function, returns True if current row meets the criteria
        @return ((row indexes of not passed samples),
                 (row indexes of passed samples))
        """
        row_total = self.x.shape[0]
        vec_criteria = np.vectorize(criteria)
        result = vec_criteria(self.x[selector, column])
        passed = selector[result]
        not_passed = selector[~result]
        return passed, not_passed

    def _cal_entropy(self, selector: np.ndarray) -> float:
        """
        @brief calculate label entropy of selected rows
        @param selector: indexes of rows to be used
        @return label entropy of selected rows
        """
        row_count = selector.shape[0]
        labels = np.take(self.y, selector)
        uni_count = np.unique(labels, return_counts=True)[1]

        ratio = uni_count / (1.0 * row_count)
        entropy = -np.sum(ratio * np.log2(ratio))
        return entropy

    def _cal_gini(self, selector: np.ndarray) -> float:
        """
        @brief calculate gini index of selected rows
        @param selector: indexes of rows to be used
        @return: label gini index of selcted rows
        """
        row_count = selector.shape[0]
        labels = np.take(self.y, selector)
        uni_count = np.unique(labels, return_counts=True)[1]
        ratio = uni_count / (1.0 * row_count)
        gini = np.sum(ratio * (1 - ratio))
        return gini


class DecisionTreeVisualizer:
    """
    @class DecisionTreeVisualizer
    @brief class used to print or visualize the decision tree
    """
    max_print_num = 10
    def __init__(self,
                 tree: DecisionTree,
                 attribute_names: Optional[List[str]] = None):
        """
        @brief prints the decision tree
        @param tree: decision tree to be printed
        @param attribute_names: names of attributes of each column
        """
        self.tree = tree
        if attribute_names is None:
            attribute_names = []
            for i in range(0, tree.x.shape[1]):
                attribute_names.append("[Attribute_%d]" % i)
        self.attribute_names = attribute_names

    def print(self) -> None:
        """
        @brief prints the decision tree
        """

        # definition of recursive print function
        def tree_to_string(node: DecisionTreeNode, indent=''):
            if node.is_leaf():
                not_end = ""
                if node.results.shape[0] > self.max_print_num:
                    not_end = "..."
                return str(node.results[0 : self.max_print_num]) + not_end
            else:
                if np.issubdtype(node.split_threshold, np.integer) or np.issubdtype(node.split_threshold, np.floating):
                    decision = '%s >= %s?' % (self.attribute_names[node.data_column], node.split_threshold)
                else:
                    decision = '%s == %s?' % (self.attribute_names[node.data_column], node.split_threshold)
                true_branch = indent + 'yes -> ' + tree_to_string(node.split_true_branch, indent + '\t\t')
                false_branch = indent + 'no  -> ' + tree_to_string(node.split_false_branch, indent + '\t\t')
                return decision + '\n' + true_branch + '\n' + false_branch

        print(tree_to_string(self.tree.root))

    def visualize(self) -> str:
        """
        @brief plots the obtained decision tree using GraphViz
        """
        graph = ['digraph Tree {',
                 'node [shape=box, style="filled, rounded", color="black", fontname=helvetica] ;',
                 'edge [fontname=helvetica] ;'
                 ]

        queue = q.Queue()
        queue.put(self.tree.root)

        # iterate all nodes, add them to the graph
        counter = 0
        while not queue.empty():
            node = queue.get()

            # STEP 1: add nodes to the graph
            if node.is_leaf():
                # get all class labels
                labels = self.tree.y.take(node.results)
                classes = np.unique(labels, return_counts=True)
                classes_str = ""
                for i in range(0, classes[0].shape[0]):
                    classes_str += str(classes[0][i]) + ": " + str(classes[1][i]) + "<br/>"

                # generate final description for current node
                description = '%d [label=<impurity %s<br/>samples %s<br/>classes: <br/>%s>, fillcolor="#e5813900"] ;' % \
                              (counter, node.summary["impurity"], node.summary["samples"], classes_str)
                graph.append(description)
                # save ID
                node.summary["ID"] = counter

            else:
                # generate condition decription
                if np.issubdtype(node.split_threshold, np.integer):
                    condition = "%s &ge; %d" % (self.attribute_names[node.data_column], node.split_threshold)
                elif np.issubdtype(node.split_threshold, np.floating):
                    condition = "%s &ge; %.3f" % (self.attribute_names[node.data_column], node.split_threshold)
                else:
                    condition = "%s = %s" % (self.attribute_names[node.data_column], node.split_threshold)

                # generate final description for current node
                description = '%d [label=<%s<br/>impurity %s<br/>samples %s>, fillcolor="#e5813900"] ;' % \
                              (counter, condition, node.summary["impurity"], node.summary["samples"])
                graph.append(description)
                # save ID
                node.summary["ID"] = counter

            # STEP 2: add edges to the graph
            if node.parent is not None:
                if node.branch_type:
                    edge_angle = '45'
                    edge_label = 'True'
                else:
                    edge_angle = '-45'
                    edge_label = 'False'
                graph.append('%d -> %d [labeldistance=2.5, labelangle=%s, headlabel="%s"] ;' % \
                             (node.parent.summary["ID"], node.summary["ID"], edge_angle, edge_label))
            counter += 1
            # STEP 3: append child nodes to the queue
            if node.split_false_branch is not None:
                queue.put(node.split_false_branch)
            if node.split_true_branch is not None:
                queue.put(node.split_true_branch)

        graph.append('}')

        # return graph data (in DOT language)
        dot_data = '\n'.join(graph)
        return dot_data
