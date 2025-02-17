#include <iostream>
using namespace std;

int main()
{
    // Question 1
    
    string word = "Bleargh";
    string *wp = &word;
    
    *wp = "AckAckAck";
    
    cout<< *wp << endl;
    
    return 0;
}

/*-----------------------------------------------------------------------------------------
    Question 2

#include <iostream>
using namespace std;

int main()
{
    int ar[] = {12, 15, 23, 45, 67};

    cout << ar[3] << endl;         // 45
    cout << *(ar+2) << endl;       // 23

    int* br = ar; 

    cout << *(br+2) << endl;       // 23

    *(br+3) = *(ar+4) - *(br+2);   
    cout << *(br + 3) << endl;     // 44
}

-----------------------------------------------------------------------------------------

    Question 3
    
int main()
{
    int a = 67;
    int* b = &a;
    cout << a << endl;      // 67
    cout << &a << endl;     // 0x7fffdbeac584 (address of a)
    cout << b << endl;      // 0x7fffdbeac584 (address of a)
    cout << &b << endl;     // 0x7fffdbeac578 (address of b)
    cout << *b << endl;     // 67
    cout << *&a << endl;    // 67
    cout << *&b << endl;    // 0x7fffdbeac584 (address of a)
    cout << &*a << endl;    // Syntax error - whatever is right of the * must be a pointer 
    cout << &*b << endl;    // 0x7fffdbeac584 (address of a)
    *b = 36;
    cout << a << endl;      // 36
    cout << &a << endl;     // 0x7fffdbeac584 (address of a)
    cout << b << endl;      // 0x7fffdbeac584 (address of a)
    cout << &b << endl;     // 0x7fffdbeac588 (address of b)
    cout << *b << endl;     // 36
    cout << *&a << endl;    // 36
    cout << *&b << endl;    // 0x7fffdbeac584 (address of a)
    cout << &*a << endl;    // Syntax error - whatever is right of the * must be a pointer
    cout << &*b << endl;    // 0x7fffdbeac584 (address of a)
}
