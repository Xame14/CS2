#include <iostream>
#include "variablelength.h"
using namespace std;

int main()
{
    VariableLength varr(5);
    
    cout << varr.size() << endl; // 0
    cout << varr.memSize() <<endl; // 5
    
    varr.insert(20);
    varr.insert(40);
    varr.insert(60);
    varr.insert(80);
    varr.insert(100);
    
    cout << varr.size() << endl; // 5
    cout << varr.memSize() <<endl; // 5
    
    cout << varr.findValue(40) << endl; // 2
    
    cout << varr.findValue(100) << endl; // -1
    
    varr.insert(120);
    cout << varr.size() << endl; // 6
    cout << varr.memSize() <<endl; // 10
    
    return 0;
}
