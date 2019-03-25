//
// Created by iffi on 19-3-18.
//

#include "ast.h"

ASTNode::ASTNode(ASTManager &manager) :
        key(""), _manager(&manager) {
    _handle = manager.registerNode(this);
}

ASTNode::ASTNode(ASTManager &manager, const char *key) :
    key(key), _manager(&manager){
    _handle = manager.registerNode(this);
}

ASTNode::ASTNode(ASTManager &manager, std::string &key) :
        key(key), _manager(&manager) {
    _handle = manager.registerNode(this);
}

ASTNode::ASTNode(const ASTNode &node) :
        key(node.key),
        children(node.children),
        attributes(node.attributes),
        _manager(node._manager)
{
    _handle = _manager->registerNode(this);
}
ASTNode::ASTNode(ASTManager &manager, const ASTNode &node) :
        key(node.key),
        children(node.children),
        attributes(node.attributes),
        _manager(&manager){
    _handle = manager.registerNode(this);
}

ASTNode::~ASTNode() {
    _manager->deregisterNode(_handle);
}

bool ASTNode::appendChild(ASTNode *node) {
    if (node == nullptr)
        return false;
    children.push_back(node);
}

bool ASTNode::appendChild(const char *key) {
    auto *new_child = new ASTNode(*_manager, key);
    children.push_back(new_child);
    return true;
}

bool ASTNode::appendChild(std::string &key) {
    auto *new_child = new ASTNode(*_manager, key);
    children.push_back(new_child);
    return true;
}

bool ASTNode::removeChild(size_t index) {
    if(index < children.size() && index > 0) {
        auto start = children.begin();
        for (size_t i=0; i < index; i++)
            start++;
        children.erase(start);
        return true;
    }
    else
        return false;
}

bool ASTNode::findChild(std::string &key, size_t &index) {
    for(size_t i=0; i<children.size(); i++) {
        if (children[i] != nullptr && children[i]->key == key) {
            index = i;
            return true;
        }
    }
    return false;
}

void ASTNode::reRegister(ASTManager &manager) {
    _manager->deregisterNode(_handle);
    _manager = &manager;
    _handle = manager.registerNode(this);
}

void ASTManager::destroyNodes() {
    for(auto node: _nodes)
        delete node;
}

std::list<ASTNode*>::iterator ASTManager::registerNode(ASTNode *node) {
    _nodes.push_back(node);
}

void ASTManager::deregisterNode(std::list<ASTNode *>::iterator node) {
    try {
        _nodes.erase(node);
    }
    catch (...) {
        return;
    }
}