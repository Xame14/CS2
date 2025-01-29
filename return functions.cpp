#include <iostream>
using namespace std;

float f(float);
float fun(float,float);
void g(float, float);

int main()
{
    //g(x,y)-f(x)+fun(x,y)
    float f1,f2;
    
    for(int i=0; i<5; i++){
        cout << "enter two numbers: ";
        cin >> f1 >> f2;
        
        g(f1,f2);
    }
    
    g(2, 3.5)

    return 0;
}

float f(float x){
    float res = x * x + x + 1;
    //cout << res << endl;
}

float fun(float x, float y){
    float res = x*y + 3 * x + 4 *y;
    //cout << res;
    return res
}

void g(float x, float y){
    float r1 = f(x);
    float r2 = fun(x,y);
    cout<<r1+r2<<endl;
    
    //cout << f(x) + fun(x,y) << endl;
}
