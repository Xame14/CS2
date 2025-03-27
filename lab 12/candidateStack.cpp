#include "candidateStack.h"

CandidateStack::CandidateStack(){ //initialize the stack that contains no nodes
    head = nullptr;
    tail = nullptr;
    count = 0;
}

int CandidateStack::size(){ // return the number of nodes in the stack
    return count;
}
  
void CandidateStack::push(Candidate* c){ //insert values in front of the stack
    Node* temp = new node();
    temp->data = c;
    //Case where empty
    if(head == nullptr){
        head = temp;
        tail = nullptr;
        count = count + 1;
    }
    else{
        temp->next = head;
        head = temp;
        count = count + 1;
    }
    
}

Candidate* CandidateStack::pop(){ //remove values from the front of the stack. If stack is empty, return nullptr
    if(head == nullptr){
        return nullptr;
    }
    //Case only one
    else if()
    else{
        Candidate* name = head->data;
        head = head->next;
        count = count - 1;
        return name;
    }
}

Candidate* CandidateStack::top(){ //return the first value in the stack. If stack is empty return nullptr
    if(head == nullptr){
        return nullptr;
    }
    else{
        Candidate* name = head->data;
        return name;
    }
}

void CandidateStack::candidates(){ //print all the candidates stored in the stack. You should use the display function of Candidate class to display each Candidate
    for(Node* i = head; i!= nullptr; i = i->next) // iterate over node*
  {
    cout << i->data->display() << " "; // i->data is of type int
  }
  cout << endl;
}

CandidateStack::~CandidateStack(){//delete any existing memory
    Node* i = head;
    while( i!= nullptr){
        head = head->next;
        delete i;
        i = head;
    }
}
