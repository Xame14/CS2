#include "Autocompleter.h"

Autocompleter::Autocompleter
{
    root=nullptr;
}
Autocompleter::~Autocompleter
{
    deleteNodes(root);
}

Autocompleter::sizeR(Node* p)
{
    if(p==nullptr)
        return;
    return size(node->left)+size(node->right);
}
Autocompleter::size()
{
    return sizeR(root);
    
}
Autocompleter::heightR()
{
    if(p==nullptr)
        return -1;
    return 1+max(heightR(p->left),heightR(p->right));
}
Autocompleter::height()
{
    return heightR(root);
    
}

void Autocompleter::insert(string name)
{
    insertR(root,string name);
    
}
void Autocompleter::insertR(Node* &p,string name)//inserts the string value in the 
{
    if(p==nullptr)
    {
       Node* temp =new Node();
       temp->data = name;
       temp->left =nullptr;
       temp->right = nullptr;
       p=temp;
       
    }   
    else if(p->data>name)
    {
        insertR(p->left,name);
    }
    else
    {
        insertR(p->right,name);
    }
 
}
