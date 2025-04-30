#include "bst.h"
#include <queue>

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
    else{ // p->data <= value  (duplicates or greater then p)
        insertR(p->right, value);
    }
}

bool BST::searchR(Node* p, int value){
    
    if(p == nullptr){
        return false;
    }
    if(p->data == value){
        return true;
    }
    else if(p->data > value){
        return searchR(p->left, value);
    }
    else{ // p->data >= value
        return searchR(p->right, value);
    }    
}

bool BST::search(int value){
    return searchR(root, value);
    // bool b = searchR(root, value)
    // return b
}

void BST::inorderTraversalR(Node* p){
   
   if(p == nullptr){
       return;
   }
   inorderTraversalR(p->left);
   cout<< p->data << " ";
   inorderTraversalR(p->right);
}

void BST::inorderTraversal(){
   inorderTraversalR(root); 
}

void BST::preorderTraversalR(Node* p){
   
   if(p == nullptr){
       return;
   }
   
   cout<< p->data << " ";
   preorderTraversalR(p->left);
   preorderTraversalR(p->right);
}

void BST::preorderTraversal(){
   preorderTraversalR(root); 
}

void BST::postorderTraversalR(Node* p){
   
   if(p == nullptr){
       return;
   }
   
   postorderTraversalR(p->left);
   postorderTraversalR(p->right);
   cout<< p->data << " ";
}

void BST::postorderTraversal(){
   postorderTraversalR(root); 
}

void BST::levelorderTraversal(){
    if(root == nullptr){
        return;
    }
    queue<Node*> q;
    // level 0
    q.push(root);
    while(q.size() != 0){ // || !q.empty()
        Node* n = q.front();
        if(n->left != nullptr){
            q.push(n-> left);
        }
        if(n->right != nullptr){
            q.push(n->right);
        }
        cout<< n->data <<" ";
        q.pop();
    }
}

/*
    class QNode{
        Node* data;
        QNode* next; 
    };
*/
