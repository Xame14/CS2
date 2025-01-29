#include <iostream>
using namespace std;

//function prototype
void welcomeMessage();
void f(float);
void fun(float,float);
void uppercase(string);
void computesum(float[],int);

int main()
{
    
    uppercase("abc");
    uppercase("john doe");
    
    //fuction call
    welcomeMessage();
    
    int x = 3;
    x = x + 2;
    cout << x << endl;
    
    welcomeMessage();
    
    f(3.5);
    f(-10.2);
    f(15);
    
    fun(10.2, 5.7)
    
    float nl = 4.5, n2 = 3.7;
    f(nl);
    f(n1*n2);
    f(3.7 - 10.2);
    
    fun(n1, n2-n1);
    float ar[3] = {10.2, -3.5, 4.7};
    
    computesum(ar, 3);
    
    float br[3] = {10.2,-3.5,4.7,-10, 20.4};
    
    computesum(br, 5);
    
    fun(ar[0], ar[1]*ar[2]);

    return 0;
}

// f(x) = x^2 + x + 1

f(float x){
    float res = x * x + x + 1;
    cout << res << endl;
    fun(-3.4, -7)
}


//function definition
void welcomeMessage(){
    cout <<"Welcome to CS2"<<endl;
}

void fun(float x, float y){
    float res = x*y + 3 * x + 4 *y;
    cout << res;
}

void uppercase(string s){
    for(int i = 0; i<s.length();i++){
        s[i] = touppper(s[i]);
    }
    
    cout<<s<<endl;
}

void computesum(float a[], int len){
    flout sum = 0;
    
    for(int i =0; i < len;i++){
        sum = sum + a[i];
    }
    cout<<sum<<endl;
}
