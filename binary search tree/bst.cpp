#include "bst.h"

BST::BST(){
    root = nullptr;
}

void BST::deleteNodes(Node* p){
    if(p == nullptr)
        return;
    
    deleteNodes(p->left);
    deleteNodes(p->right);
    delete p;
}
BST::~BST(){
    deleteNodes(root);
}

int BST::sizeR(Node* p){
    if(p == nullptr)
        return 0;
    return sizeR(p->left) + sizeR(p->right) + 1;
}

int BST::size(){
    return sizeR(root) +1;
}

int BST::heightR(Node* p){
    if(p == nullptr)
        return -1;
    return 1 + max(heightR(p->left), heightR(p->right));
}
int BST::height(){
    return heightR(root);
}

void BST::insert(int value){
    insertR(root, value);    
}

void BST::insertR(Node* &p, int value){
    
    if(p == nullptr){
        Node* temp = new Node();
        temp->data = value;
        temp->left = nullptr;
        temp->right = nullptr;
        p = temp;
    }
    else if(p->data > value){
        insertR(p->left, value);
    }
    else{
        insertR(p->right, value);
    }
}
