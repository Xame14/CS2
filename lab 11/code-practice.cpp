#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

Node* insertFront(Node* head, int value)
{
    Node* temp = new Node();
    temp->data = value;
    temp->next = head;
    head = temp;
    return head;
    
}

void insertThird(Node* &head, int value)
{
    //common operations
    Node* temp = new Node();
    temp->data = value;
    
    // if you have zero nodes
    if(head == nullptr){
        temp->next = nullptr;
        head = temp;
    }
    // assume we have exacty one node
    else if(head->next == nullptr){
        temp->next = nullptr;
        head->next = temp;
    }
    // assume we have at least 2 nodes in the list
    else{
        temp->next = head->next->next;
        head->next->next = temp;
    }
}

void printList(Node* head)
{
    for(Node* i = head; i != nullptr; i = i->next){ //iterate over node*
        cout << i->data << " ";
    }
    cout<<endl;
}

void insertLast(Node* &head, int value) // insert data at the end of the list
{
    Node* temp = new Node();
    temp->data = value;
    
    temp->next = nullptr;
    
    if(head == nullptr){
        head = temp;
    }
    else{
        Node* i = head;
        for(; i->next != nullptr; i=i->next)
        {
            // loop ends when i is the last node
        }
        
        //for(; i->next != nullptr; i=i->next);
        i->next = temp;
    }
    
}

int deleteFront(Node* &head) // delete and return the first integer from the list. if list is empty, return -1
{
    if(head == nullptr){
        int d = head->data;
        delete head;
        head = nullptr;
        return d;
    }
    else{
        Node* temp = head;
        int dt = temp->data;
        head = temp -> next;
        delete temp;
        return dt;
    }
}

int main()
{
  Node* n1 = new Node();
  n1->data = 10;

  Node* n2 = new Node();
  n2->data = 20;

  Node* n3 = new Node();
  n3->data = 30;

  n1->next = n2;
  n2->next = n3;
  n3->next = nullptr;

  Node* h = n1;

  // 10 -> 20 -> 30 
  h = insertFront(h, 5);
  //5 -> 10 -> 20 -> 30 
  
  
  insertThird(h, 25);
  

  printList(h);
  
  // test cases for lab
  insertLast(h, 50);
  printList(h);

  cout << deleteFront(h) << endl; // 5
  printList(h);


}
