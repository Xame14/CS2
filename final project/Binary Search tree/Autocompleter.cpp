#include "Autocompleter.h"
#include <queue>

Autocompleter::Autocompleter()
{
    root=nullptr;
}

void Autocompleter::deleteNodes(Node* p)
{
    if(p == nullptr)
        return ;
    deleteNodes(p->left);
    deleteNodes(p->right);
    delete p;
}

Autocompleter::~Autocompleter()
{
    deleteNodes(root);
}

int Autocompleter::sizeR(Node* p)
{
    if(p==nullptr)
        return 0;
    return sizeR(p->left)+sizeR(p->right)+1;
}

int Autocompleter::size()
{
    return sizeR(root);

}
int Autocompleter::heightR(Node* p)
{
    if(p==nullptr)
        return -1;
    return 1+max(heightR(p->left),heightR(p->right));
}
int Autocompleter::height()
{
    return heightR(root);

}

void Autocompleter::insert(string word)
{
    insertR(root, word);

}

void Autocompleter::insertR(Node* &p,string word)//inserts the string value in the
{
    if(p == nullptr){
        Node* temp =new Node();
        temp->name = word;
        temp->left =nullptr;
        temp->right = nullptr;
        p = temp;
    }
    else if(p->name > word ){
        insertR(p->left,word);
    }
    else{
        insertR(p->right,word);
    }

}
