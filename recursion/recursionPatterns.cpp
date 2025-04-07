#include <iostream>
using namespace std;
// Write a method void lineOfStars(int n) that prints a line of n stars.  
// You should not use a loop.
void lineOfStars(int n) {
    if(n<=0)
        return;
    cout << "*";
    lineOfStars(n-1);
    //cout << endl;
  

}


/*
Write a method void stars(int n) that prints the weird shape below.
You should not use a loop.  You may call lineOfStars as a subroutine inside this function.

stars(4);

should display:

****
***
**
*
*
**
***
****

*/
void stars(int n) {
    if(n<=0)
        return;
    lineOfStars(n);
    cout << endl;
    stars(n-1);
    cout << endl;
    lineOfStars(n);
   
}


int main() {

    lineOfStars(5);//   should display: *****
    cout << endl;
    cout << endl;
    stars(4);
}
