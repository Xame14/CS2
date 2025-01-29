#include <iostream>
using namespace std;

//function prototypes

int difference(int,int);
void input(int&, int&);
//findprimenumbers();

int main()
{
    cout<<difference(20, 3);
    cout<<difference(-4, 13);
    
    int n1,n2;
    input(n1,n2);
    
    cout<<n1<<endl;
    cout<<n2<<endl;

    return 0;
}

int difference(int a,int b){
    c = a - b;
    return c;
    
}

void input(int &a,int &b){
    int a,b;
    cout<<"Enter two intergers: ";
    cin >> a >> b;
}
