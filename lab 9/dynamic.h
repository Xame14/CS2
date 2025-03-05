#ifndef DYNAMIC_H
#define DYNAMIC_H
class Dynamic{
  public:


    // constructor takes the initial size of the memory and allocates a memory space of that size to the pointer
    // initializes count to 0
    Dynamic(int size);

    // If memory is already full, calls the expand() to expand memory to double size
// inserts the new value at the end
    // increments count by 1
    void insert(int value);

    // returns the count
    int size();

    // returns the memory size
    int memSize();

    // finds if the value is stored. If yes, returns the index (if value exists multiple times, only return the index of first occurrence)
    // if value isn't available, return -1
    int findValue(int value);

    // insertAt takes a index and a value, and inserts the value at that index. It pushes all value starting that index to the right
// for example, if your array has the following values:
// 5, 10, 2, 4, 3
// insertAt(3, 9); will insert element 9 at index 3. The resulting array will be:
// 5, 10, 2, 9, 4, 3
// make sure to expand the memory if you do not have enough space as you did in the insert function. (Use the expand() function defined)
// if index > count, insert the new value just after the existing values
// you should not have any empty spaces in between values
// For example, insertAt(7, 20); in the above array will lead to:
// 5, 10, 2, 9, 4, 3, 20 (that is insert at index 6 not 7 because the previous count was only 6)
// increments count by 1
  void insertAt(int index, int value);

  //erase function that doesn't take a value and always erases the right most value if it exists and returns it. return -1 if no value exists
  int erase();
  // erase function takes a value and deletes all occurrences of the value if the value exists in the array. Make sure to move all values on the right of the deleted value to the left so there is no empty spaces in the middle
  // decrement count by 1
  void erase(int value);
  // eraseAt function takes an index and deletes the value at that index. Make sure to all values after that index to the left
  void eraseAt(int index);
    // delete any dynamic memory
    ~Dynamic();
    
  private:
    void expand();
    // count stores the number of current values
    int count, _size;
    int *ar;

};
#endif
