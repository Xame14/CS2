#include "candidate.h"
#ifndef CANDIDATEQUEUE_H
#define CANDIDATEQUEUE_H
class CandidateQueue{
  public:
  //initialize the queue that contains no nodes
    CandidateQueue();
  // return the number of nodes in the queue
    int size();
  //insert values in end of the queue
  void push(Candidate* c);
  //remove values from the front of the queue. If queue is empty, return nullptr
  Candidate* pop();
  //return the first value in the queue. If queue is empty return nullptr
  Candidate* front();
  //return the last value in the queue. If queue is empty return nullptr
  Candidate* rear();
  //print all the candidates stored in the queue. You should use the display function of Candidate class to display each Candidate
  void candidates();
  //delete any existing memory
  ~CandidateQueue();
  private:
  class Node{
  public:
    Candidate* data;
    Node* next;
  };
  Node* head;//points to the front of queue
  Node* tail;//points to the end of queue
  int count;//keeps track of number of values/nodes
};
#endif
