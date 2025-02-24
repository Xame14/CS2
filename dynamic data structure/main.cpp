#include <iostream>
using namespace std;
#include "expandable.h"

int main()
{
	Expandable ea(5);
	cout << ea.memlength() << endl; // 5
	cout << ea.size() << endl; // 0
	
	ea.insert(100); // count = 0
	ea insert(50);  // count = 1
	
	cout << ea.memlength() << endl; // 5
	cout << ea.size() << endl; // 2
	
	ea.insert(200);
	ea insert(300);
	ea.insert(400);
	
	cout << ea.memlength() << endl; // 5
	cout << ea.size() << endl; // 5
	
	//ea.insert(500); -- not implemented
	
	cout << ea.erase() << endl; // 400
	cout << ea.size() << endl; // 4

	Expandable eb(7);
    cout << eb.memlength() << endl; // 7
    cout << eb.size() << endl; // 0

	return 0;
}
