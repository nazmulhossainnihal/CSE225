#ifndef BST_H_INCLUDED
#define BST_H_INCLUDED

#include <iostream>
using namespace std;

class BinarySearchTree{
private:
    struct tree_node{
        tree_node* left;
        tree_node* right;
        int data;
    };
    tree_node* root;

public:
    BinarySearchTree();
    bool isEmpty();
    void insert(int);
    void remove(int);
    void print_inorder();
    void inorder(tree_node*);
    void print_preorder();
    void preorder(tree_node*);
    void print_postorder();
    void postorder(tree_node*);
    int CountNode();
    int Count(tree_node* p);
};

#endif // BST_H_INCLUDED
