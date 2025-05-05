class Autocompleter{
    public:
    Autocompleter();
    ~Autocompleter();
    int size();
    int height();
    void completion(string);
    void insert(string):
    
    private:
    Node* root
    class Node{
        public:
        string data;
        Node* left;
        Node* right;
    };
    void deleteNodes(Node* p)
    void insertR(Node* &p, string);
    void height(Node* p);
    void sizeR(Node* p);
    string word;
};
