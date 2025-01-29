#include <iostream>
using namespace std;

int input();
void input2(int&, int&);


int main()
{
    int v1 = input();
    
    int n1,n2;
    input2(n1,n2)
    
    
    int v2 = input();
    

    return 0;
}

int input(){
    int i;
    cout<< "Enter and integer";
    cin >> i;
    return i;
}

int input2(int &i, int &j){
    int i,j;
    cout<<"Enter two intergers: ";
    
    return i;
    //return j; won't work
    //return i,j only on python
}
