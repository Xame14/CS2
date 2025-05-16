#include "linkedList.h"

linkedList::linkedList(){ //constucter
    
    head = nullptr;
    count = 0;
}

linkedList::~linkedList(){ // deconstructor
    
    for(Node* i = head; i!= nullptr;){
        Node* temp = i->next;
        delete i;
        i = temp;
    }
}

int linkedList::size(){ //count
    return count;
}

void linkedList::print(){ // print
    
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
            if(current->data < minNode->data){ // if currents value is less than minimus value make min == curent
                minNode = current;
                minpre = currentpre;
            }
            current = current->next;
            currentpre = currentpre->next;
        }
        int value = minNode->data; // get the number in minnode and set it to value as and int
        minpre->next = minNode->next; // lnking minimums previouse to minimums next (skipping minNide)
        delete minNode;
        return value;
        
    }
    
}
