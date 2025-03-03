class VariableLength{ // array but with no fixed length
    
    public: // methods
    VariableLength(int);
    int findValue(int); // search for a value and return its index
    void insert(int); // insert at the rightmost (first available) location
    int erase(); // erase the rightmost value and return it
    int size(); // amount of data
    int memSize(); // amount of memory
    ~VariableLength();
    void insertAt(int index, int value);
    int erase();
    // erase function takes a value and deletes all occurrences of the value if the value exists in the array. Make sure to move all values on the right of the deleted value to the left so there is no empty spaces in the middle
    // decrement count by 1
    void erase(int value);
    // eraseAt function takes an index and deletes the value at that index. Make sure to all values after that index to the left
    int eraseAt(int index);
    
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
