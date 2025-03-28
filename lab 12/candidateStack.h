#include "candidate.h"
#ifndef CANDIDATESTACK_H
#define CANDIDATESTACK_H
class CandidateStack{
  public:
  //initialize the stack that contains no nodes
    CandidateStack();
  // return the number of nodes in the stack
    int size();
  //insert values in front of the stack
    void push(Candidate* c);
  //remove values from the front of the stack. If stack is empty, return nullptr
    Candidate* pop();
  //return the first value in the stack. If stack is empty return nullptr
    Candidate* top();
  //print all the candidates stored in the stack. You should use the display function of Candidate class to display each Candidate
    void candidates();
  //delete any existing memory
    ~CandidateStack();

  private: 
  class Node{
    public:
    Candidate* data;
    Node* next;
  };
  Node* head;//points to the front of stack
  Node* tail;//points to the end of stack
  int count;//keeps track of number of values/nodes
};
#endif
