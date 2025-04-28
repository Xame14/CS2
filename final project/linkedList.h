class linkedList{
  public:
  linkedList();
  ~linkedList();
  int size();   // returns size
  void print();      // prints
  void push(int);    // will insert value to the front
  int pop();        // pop smallest value
  
  private:
  class Node{
    int data;
    Node* next;
  };
  Node* head;
  int count;
    
};