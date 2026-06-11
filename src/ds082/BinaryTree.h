#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <queue>

// Node class of Binary Tree
class TreeNode {
public:
    int data;
    TreeNode* leftnode;
    TreeNode* rightnode;

    TreeNode(int v) : data(v), leftnode(nullptr), rightnode(nullptr) {}
    ~TreeNode() {}
};

// Binary Tree Class
class BinaryTree {
private:
    TreeNode* root;

    void preorder(TreeNode* node);
    void postorder(TreeNode* node);
    void clearTree(TreeNode* node);

public:
    BinaryTree() : root(nullptr) {}
    ~BinaryTree() { clearTree(root); }

    void makeTree(int* list, int size);
    void traversalPrint(int method);
};

#endif