#include "candidateQueue.h"

CandidateQueue::CandidateQueue(){ //initialize the queue that contains no nodes
    head = nullptr;
    tail = nullptr;
    count = 0;
}

int CandidateQueue::size(){ // return the number of nodes in the queue
    return count;
}
  
void CandidateQueue::push(Candidate* c){ //insert values in end of the queue
    Node* temp = new Node();
    temp->data = c;
    //Case where empty
    if(head == nullptr){
        head = temp;
        tail = temp;
        tail->next= nullptr;
        count = count + 1;
    }
    
    else{
        temp->next = nullptr;
        tail->next = temp;
        tail = temp;
        count = count + 1;
    }
}

Candidate* CandidateQueue::pop(){ //remove values from the front of the queue. If queue is empty, return nullptr
    if(head == nullptr){ //empty
        return nullptr;
    }
    else if(head->next == nullptr){  // 1 node
        Candidate* name = head->data;
        delete head;
        head = nullptr;
        count = count - 1;
        return name;
    }
    else{  // more than 1
        Candidate* name = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        count = count - 1;
        return name;
    }
}
 
Candidate* CandidateQueue::front(){ //return the first value in the queue. If queue is empty return nullptr
    if(head == nullptr){
        return nullptr;
    }
    else{
        Candidate* name = head->data;
        return name;
    }
}
 
Candidate* CandidateQueue::rear(){ //return the last value in the queue. If queue is empty return nullptr
     if(head == nullptr){
        return nullptr;
    }
    else{
        Candidate* name = tail->data;
        return name;
    }
}

void CandidateQueue::candidates(){  //print all the candidates stored in the queue. You should use the display function of Candidate class to display each Candidate
    for(Node* i = head; i!= nullptr; i = i->next) // iterate over node*
    {
        i->data->display(); // i->data is of type int
    }
    cout << endl;
}
 
CandidateQueue::~CandidateQueue(){  //delete any existing memory
    Node* i = head;
    while( i!= nullptr){
        head = head->next;
        delete i;
        i = head;
    }
}
