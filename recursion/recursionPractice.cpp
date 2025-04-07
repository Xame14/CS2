#include <iostream>
using namespace std;

// This function print the elements in the Array from start index to end index
void printArray(int ar[], int start, int end)
{
    if(start > end)
        return;
    cout << ar[start] << " ";
    printArray(ar,start+1,end);
}


// This function print the elements in the Array in reverse from end index to start index
void printArray_reverse(int ar[], int start, int end)
{
    if(start > end)
        return;
    printArray_reverse(ar,start+1,end);
    cout << ar[start] << " ";
}

int main()
{
    int a[4] = {10, 20, 30, 40};

    cout << "Your answer should be 10 20 30 40. Your result is: ";
    printArray(a, 0, 3);
    cout << endl;

    cout << "Your answer should be 40 30 20 10. Your result is: ";
    printArray_reverse(a, 0, 3);
    cout << endl;
}
