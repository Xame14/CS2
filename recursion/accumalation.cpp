#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
};
Node* createList();

// define the following functions. you are NOT ALLOWED to use loops.

// this function returns the sum of elements in ar from start index to end index
int sumArray(int ar[], int start, int end)
{
    if(start > end)
        return 0; 
    int result = ar[start] + sumArray(ar,start+1,end);
    return result;
}
//this function returns the product of values stored in the linked list starting at head
long productLinkedList(Node* head)
{
    if(head == nullptr)
        return 1; 
    long product = head->data * productLinkedList(head->next);
    return product;
}
//this function returns the product of first n integers
long product(int n)
{
    if(n <= 1)
        return 1; 
    long result = n * product(n - 1);
    return result;
}
// this function finds and returns the index of value in the array ar from start index to end index. If the value isn't found it returns -1.
int linearSearch(int ar[], int start, int end, int value)
{
    if(start > end)
        return -1;
    if(ar[start] == value)
        return start;
    else
        return linearSearch(ar, start+1, end, value);
}

int main()
{
    int a[4] = {10, 20, 30, 40};
    Node* h = createList();
    cout << "Sum of elements in the array should be 100. Your answer is: " << sumArray(a, 0, 3) << endl;
    cout << "Product of elements in the list should be 240000. Your answer is: " << productLinkedList(h) << endl;
    cout << "Product of first 6 integers should be 720. Your answer is: " << product(6) << endl;
    cout << "The index of 10 in the array should be 0. Your answer is: " << linearSearch(a, 0, 3, 10) << endl;
    cout << "The index of 100 in the array should be -1. Your answer is: " << linearSearch(a, 0, 3, 100) << endl;
}

Node* createList()
{
    Node* n1 = new Node();
    n1->data = 10;
    Node* n2 = new Node();
    n2->data = 20;
    Node* n3 = new Node();
    n3->data = 30;
    Node* n4 = new Node();
    n4->data = 40;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = nullptr;

    return n1;
}
