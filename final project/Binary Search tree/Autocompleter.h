#include <iostream>
#include <string>

using namespace std;


class Autocompleter{
    public:
    Autocompleter();
    ~Autocompleter();
    int size();
    int height();
    void completion(char name);
    void insert(string name);
    
    private:
    class Node{
        public:
        string name;
        Node* left;
        Node* right;
    };
    Node* root;
    void deleteNodes(Node* p);
    void insertR(Node* &p, string);
    int heightR(Node* p);
    int sizeR(Node* p);
    string word;
    void completionR(Node* p,char);
};
