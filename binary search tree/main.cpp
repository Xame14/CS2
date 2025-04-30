#include "bst.h"


int main()
{
    BST b;
    cout<<b.size()<<endl; //0
    cout<<b.height()<<endl; // -1
    
    b.insert(20);
    b.insert(5);
    b.insert(10);
    b.insert(25);
    b.insert(31);
    b.insert(33);
    
    cout<<b.size()<<endl; //7
    cout<<b.height()<<endl; // 3
    
    b.inorderTraversal();
    
    cout<<endl;
    
    b.preorderTraversal();
    
    cout<<endl;
    
    b.postorderTraversal();
    
    cout<<endl;
    
    b.levelorderTraversal();
    

    return 0;
}
