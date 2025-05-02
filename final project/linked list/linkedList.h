#include <iostream>
using namespace std;

class linkedList {
public:
	linkedList();
	~linkedList();
	int size();   // returns size
	void print();      // prints
	void push(int);    // will insert value to the front
	int pop();        // pop smallest value
	class Node {
	    public:
		int data;
		Node* next;
	};
	
	private:
	Node* head;
	int count;

};
