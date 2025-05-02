#include "linkedList.h"

int main()
{
    linkedList list;
    
    list.push(13);
    list.push(53);
    list.push(81);
    
    cout<<"The current size of the list is: "<<list.size()<<endl; //3
    
    list.push(76);
    list.push(89);
    list.push(34);
    
    cout<<"The current size of the list is: "<<list.size()<<endl; //6
    
    list.push(96);
    
    list.print();
    
    list.push(80);
    
    cout<<"The current size of the list is: "<<list.size()<<endl; //8
    
    cout<<"The lowest value that will be deleted is: "<<list.pop()<<endl; //13
    cout<<"The lowest value that will be deleted is: "<<list.pop()<<endl; //34
    
    

    return 0;
}
