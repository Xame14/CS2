#include <iostream>
#include "Autocompleter.h"
using namespace std;

int main(){
    
    Autocompleter Name;
    
    Name.insert("Raymond");
    Name.insert("Noah");
    Name.insert("Felipe");
    Name.insert("Lawrence");
    
    cout<<"The current size is: "<< Name.size()<<endl;
    cout<<"The hight is currently: "<< Name.height()<<endl;
    
    Name.insert("Benjamin");
    Name.insert("Joseph");
    Name.insert("Hiram");
    Name.insert("Arnold");
    
    cout<<"The current size is: "<< Name.size()<<endl;
    cout<<"The hight is currently: "<< Name.height()<<endl;
    
    Name.insert("Boe");
    Name.insert("Sonya");
    Name.insert("Neville");
    
    cout<<"The current size is: "<< Name.size()<<endl;
    cout<<"The hight is currently: "<< Name.height()<<endl;
    
    Name.completion('b');
    
    
    return 0;
}
