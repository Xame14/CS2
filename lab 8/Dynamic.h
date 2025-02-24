#ifndef DYNAMIC_H
#define DYNAMIC_H
class Dynamic{
  public:


    // constructor takes the initial size of the memory and allocates a memory space of that size to the pointer
    // initializes count to 0
    Dynamic(int size);

    // Inserts a value in the memory. If memory is already full, allocates another memory of double the current size before inserting. Copies the values from previous to this new memory and then inserts the new value.
//Also, update the _size.
// delete the previous memory and points ar to the new memory
    // increments count by 1
    void insert(int value);

    // returns the count
    int size();

    // returns the memory size
    int memSize();

    // finds if the value is stored. If yes, returns the index (if value exists multiple times, only return the index of first occurence)
    // if value isn't available, return -1
    int findValue(int value);

    // delete any dynamic memory
    ~Dynamic();
    
  private:
    // count stores the number of current values
    int count, _size;
    int *ar;

};
#endif
