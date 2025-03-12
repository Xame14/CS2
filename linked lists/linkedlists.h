#include "candidate.h"

class LinkedList{
    public:
    LinkedList();
    int size(); // return the number of data pointers(or nodes)
    void pushFront(Candidate* c); // insert a new node in the front
    Void pushBack(Candidate* c);  // inster a new node int the back
    ~LinkedList();
    Candidate* popFront(); // remove and returns the first value
    void print(); // print all candidates from left to right
    
    private:
    
    class Node{
        public:
        Candidate* data;
        Node* next
    ;}
    Node* head;
    int count;
    Node* tail;
    
};
