#include <iostream>
using namespace std;

// in a balanced BST, height = log_2 n (log n based 2)
class BST{
  public:
  BST(); 
  ~BST();
  int size();                                       //O(n)
  int height();                                     //O(n)
  void insert(int value);                           //O(height)
  bool search(int value); //depth-first             //O(height)
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
  bool searchR(Node* p, int value); //returns true or false if
  void inorderTraversalR(Node* p); //left, parent, right
  void preorderTraversalR(Node* p); //parent, left, right
  void postorderTraversalR(Node* p);//left, right, parent
};
