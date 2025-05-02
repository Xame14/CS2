#include "linkedList.h"

linkedList::linkedList(){
    
    head = nullptr;
    count = 0;
}

linkedList::~linkedList(){
    
    for(Node* i = head; i!= nullptr;){
        Node* temp = i->next;
        delete i;
        i = temp;
    }
}

int linkedList::size(){
    return count;
}

void linkedList::print(){
    
    for(Node* i = head; i != nullptr;i = i->next){
        cout<< i->data<<", ";
        
    }
    cout<< endl;
    
}

void linkedList::push(int value){ // will insert value to the front
    
    Node* temp = new Node();
    temp->data = value;
    
    if(head == nullptr){
        temp->next = nullptr;
    }
    else{
        temp->next = head;
        
    }
    head = temp;
    count++;
}

int linkedList::pop(){
     
    if(head == nullptr){
        return -1;
    }
    if(head->next == nullptr){
        Node* temp = head;
        int num = temp->data;
        head = nullptr;
        delete temp;
        return num;
    }
    else{
        Node* minpre = nullptr;         // smallest value previous
        Node* minNode = head;           // smallest value node
        Node* current = head->next;     // where the checker is
        Node* currentpre = head;         // checker's previous
        
        while(current != nullptr){
            if(current->data < minNode->data){
                minNode = current;
                minpre = currentpre;
            }
            current = current->next;
            currentpre = currentpre->next;
        }
        int value = minNode->data;
        minpre->next = minNode->next;
        delete minNode;
        return value;
        
    }
    
}
