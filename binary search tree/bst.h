#include <iostream>
using namespace std;


class BST{
  public:
  BST();
  ~BST();
  int size();
  int height();
  void insert(int value);
  bool search(int value); //depth-first
  void inorderTraversal(); //left, parent, right
  void preorderTraversal(); //parent, left, right
  void postorderTraversal(); //left, right, parent
  void levelorderTraversal(); //breadth-first
  
  private:
  class Node{
    public:
    int data;
    Node* left;
    Node* right;
  };
  Node* root;
  void deleteNodes(Node* p);
  int sizeR(Node* p); // size of the tree with parentnp
  int heightR(Node* p); //height of the tree with parent p
  void insertR(Node* &p, int value); // insert value in the tree 
};
