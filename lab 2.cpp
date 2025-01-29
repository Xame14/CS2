#include <iostream>
using namespace std;

//function prototypes

int difference(int,int);
void input(int&, int&);
void findprimenumbers(int [],int);
bool checkprime(int);

int main()
{
    cout<<difference(20, 3)<<endl;            //using the examples for difference
    cout<<difference(-4, 13)<<endl;
    
    int n1,n2;                                //intializing the inputs
    input(n1,n2);                             //asking for the inputs with a function
    
    cout<<"You have entered: "<<n1<<endl;     //using pass by reference to cout the variable
    cout<<"You have entered: "<<n2<<endl;
    
    int A[5] = {2, 11, 33, 41, 10};           //using find prime numbers fuction with an array
    findprimenumbers(A,5);

    return 0;
}

int difference(int a,int b){
    int c;
    if(a < 0){                    //making a converter so the examples both equal 17 (and for use of different numbers to not be negitive
        b = b *-1;
    }
    if(b < 0){
        a = a *-1;
    }
    c = a - b;
    return c;
    
}

void input(int &a,int &b){
    cout<<"Enter two intergers: ";            //double input function
    cin >> a >> b;
}

void findprimenumbers(int arr[], int total){                //checking for prime numbers
    for(int i = 0; i < total;i++){
        bool ans = checkprime(arr[i]);
        if(ans == true){
            cout<<arr[i]<<" is a prime number."<<endl;
            
            }
            
    
    }
}

bool checkprime(int a){
    for(int i = 2; i <= a - 1;i++){            //the actual checking code
        if(a % i == 0){
            return false;
        }
    }
    return true;
}






