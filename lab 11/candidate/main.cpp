#include "candidate.h"
using namespace std;

class Node{
    public:
    Candidate* data;
    Node* next;
};

void insertLast(Node* &head, Candidate* c)
{
    Node* temp = new Node();
    temp->data = c;
    
    temp->next = nullptr;
    
    // empty list
    if(head == nullptr){
        head = temp; // temp becomes the only node
    }
    // non empty
    else{
        // temp should be next of the last node
        // where i is the last node, i->next == nullpty
        
        for(Node* i = head; i != nullptr ;i = i->next){
            // loops ends when i is the last node
            if(i->next == nullptr){
                i->next = temp;
            }
        }
    }
}

void printList(Node* head)
{
    for(Node* i = head; i != nullptr; i=i->next){
        Candidate* c = i->data;
        
        i->data->display();
    }

}

Candidate* deleteLast(Node* &head)
{
    if(head == nullptr){
        Candidate* temp = head->data;
        delete head;
        head = nullptr;
        return temp;
    }
    else{
        Node* temp = head;
        while(temp->next->next != nullptr){
            temp = temp->next;
        }
        Candidate* name = temp->next->data;
        delete temp->next;
        temp->next = nullptr;
        return name;
    }
}
int main()
{
    Candidate c1("John", "Manager"); // c1 ia an object of type candidate
    Candidate* c2 = new Candidate("Alice", "Developer"); //c2 holds 

    Node* n1 = new Node();
    n1->data = &c1; // n1 stores address of object c1

    Node* n2 = new Node();
    n2->data = c2;

    Candidate* c3 = new Candidate("Charles", "Designer");

    Node* h = n1;

    insertLast(h, c3);
    
    printList(h);

    // test cases for lab
    Candidate* c = deleteLast(h); // Charles is a Designer
    c->display();
    printList(h);

}
