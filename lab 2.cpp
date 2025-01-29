#include <iostream>
using namespace std;

//function prototypes

int difference(int,int);
void input(int&, int&);
void findprimenumbers(int [],int);
bool checkprime(int);

int main()
{
    cout<<difference(20, 3)<<endl;
    cout<<difference(-4, 13)<<endl;
    
    int n1,n2;
    input(n1,n2);
    
    cout<<"You have entered: "<<n1<<endl;
    cout<<"You have entered: "<<n2<<endl;
    
    int A[5] = {2, 11, 33, 41, 10};
    findprimenumbers(A,5);

    return 0;
}

int difference(int a,int b){
    int c;
    if(a < 0){
        b = b *-1;
    }
    if(b < 0){
        a = a *-1;
    }
    c = a - b;
    return c;
    
}

void input(int &a,int &b){
    cout<<"Enter two intergers: ";
    cin >> a >> b;
}

void findprimenumbers(int arr[], int total){
    for(int i = 0; i < total;i++){
        bool ans = checkprime(arr[i]);
        if(ans == true){
            cout<<arr[i]<<" is a prime number."<<endl;
            
            }
            
    
    }
}

bool checkprime(int a){
    for(int i = 2; i <= a - 1;i++){
        if(a % i == 0){
            return false;
        }
    }
    return true;
}






