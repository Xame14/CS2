class VariableLength{ // array but with no fixed length
    
    public: // methods
    VariableLength(int);
    int findValue(int); // search for a value and return its index
    void insert(int); // insert at the rightmost (first available) location
    int erase(); // erase the rightmost value and return it
    int size(); // amount of data
    int memSize(); // amount of memory
    ~VariableLength();
    
    private: // data members
    // int array
    int* ar; // start memory address of the values/data
    int length; // amount of memory
    int count; // amount of data
    void expand(); // increase the sixe of memory
};

/* 
int *x = new int();
delete x;

int*y = new int[4];
delete[] y;

*/
