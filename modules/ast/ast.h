//
// Created by iffi on 19-3-18.
//

#ifndef AST_AST_H
#define AST_AST_H

#include <map>
#include <list>
#include <string>
#include <vector>
#include <mapbox/variant.hpp>
#include <py_obj/py_obj.h>
class ASTManager;
/**
 * @brief class for abstract syntax tree node
 */
class ASTNode {
public:
    std::string key;
    std::vector<ASTNode*> children;
    std::map<std::string, Value> attributes;

    ASTNode() = delete;
    explicit ASTNode(ASTManager &manager);
    ASTNode(ASTManager &manager, const char* key);
    ASTNode(ASTManager &manager, std::string &key);
    ASTNode(const ASTNode &node);
    ASTNode(ASTManager &manager, const ASTNode &node);
    ~ASTNode();

    bool appendChild(ASTNode *node);
    bool appendChild(const char *key);
    bool appendChild(std::string &key);
    bool prependChild(ASTNode *node);
    bool prependChild(const char *key);
    bool prependChild(std::string &key);
    bool removeChild(size_t index);
    bool findChild(std::string &key, size_t &index);
    void reRegister(ASTManager &manager);

private:
    std::list<ASTNode*>::iterator _handle;
    ASTManager *_manager;
};

class ASTManager {
public:
    void destroyNodes();
    void deregisterNode(std::list<ASTNode*>::iterator node);
    std::list<ASTNode*>::iterator registerNode(ASTNode *node);
private:
    std::list<ASTNode*> _nodes;
};
#endif //AST_AST_H
