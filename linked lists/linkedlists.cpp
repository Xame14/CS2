#include "linkedlist.h"

linkedlist::Linkedlist(){
    count = 0;
    head = nullptr;
    tail = nullptr;
    
}

linkedlist::~Linkedlist(){
    // index 0 -> size - 1\
    // for(int i = 0; i>size; i++)
    for(Node* i = head; i!= nullptr;){
        Node* temp = i ->next;
        delete i;
        i = temp;
    }
    
}

int linkedlist::size(){
    
    return count;
}

void linkedlist::print(){
    
    for(Node* i = head; i!= nullptr;i = i ->next){
        Candidate* c = i ->data;
        c -> display();
    }
}

void linkedlist::pushFront(Candidate c){
    Node* temp = new Node;
    temp -> data= c;
    if(head == nullptr){ // list was empty
        //temp is now the only node
        temp -> next = nullptr;
        tail = temp;
    }
    else{
        temp -> next = head;
    }
    head = temp; // temp is now the first node 
    count++;
}

void linkedlist::pushBack(Candidate c){
    Node* temp = new Node();
    temp ->data = c;
    temp -> next = nullptr;
    if(head == nullptr){
        head = temp;
    }
    else{
        tail -> = temp;
    }
    tail = temp;
    count++
}

Candidate linkedlist::popFront(){
    
}
