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
        Node* temp = new Node();
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

void Autocompleter::completionR(Node* p,char letter)
{
    if(p == nullptr)
        return;
    string word = p->name;
    char first_letter = word[0];
    
    if(letter >= 97)  // letter is lowercase make it capital
        letter = letter - 32;
    
    if(first_letter == letter){
        cout<< p->name << " ";
        return completionR(p->right, letter);
    }
    else if(first_letter > letter)
        return completionR(p->left, letter);
    else
        return completionR(p->right, letter);
}

void Autocompleter::completion(char letter)
{
    return completionR(root,letter);
}

