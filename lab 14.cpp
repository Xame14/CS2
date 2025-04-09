#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
};
Node* createList();

// define the following functions. you are NOT ALLOWED to use loops.

// this function returns the product of elements in ar from start index to end index
long productArray(int ar[], int start, int end)
{
    if(start > end)
        return 1; 
    long product = ar[start] * productArray(ar,start+1,end);
    return product;
}
//this function returns the sum of values stored in the linked list starting at head
int sumLinkedList(Node* head)
{
    if(head == nullptr)
        return 0; 
    int sum = head->data + sumLinkedList(head->next);
    return sum;
}
//this function returns the sum of first n integers
int sum(int n)
{
    if(n <= 0)
        return 0;
    int result = n + sum(n-1);
    return result;
}
//this function returns the number of even integers between start through end (include start and/or end if they are even)
int countEven(int start, int end)
{
    int c = 0;
    int count;
    
    if(start > end)
        return -1;
    else{
        if(start % 2 == 0)
            c = c + 1;
        count = c + countEven(start+1, end);
    }
    return count;
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
    cout << "Product of elements in the array should be 240000. Your answer is: " << productArray(a, 0, 3) << endl;
    cout << "Sum of elements in the list should be 100. Your answer is: " << sumLinkedList(h) << endl;
    cout << "Sum of first 6 integers should be 21. Your answer is: " << sum(6) << endl;
    cout << "There should be 8 even numbers between 14 and 31. Your answer is: " << countEven(14, 31) << endl;
    cout << "The index of 30 in the array should be 2. Your answer is: " << linearSearch(a, 0, 3, 30) << endl;
    cout << "The index of 25 in the array should be -1. Your answer is: " << linearSearch(a, 0, 3, 25) << endl;
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