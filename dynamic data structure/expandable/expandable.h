class Expandable{ // create for integers
  
  // methods
  public:
  Expandable(int); // constructor -- called when creating an object
  void insert(int);
  int erase(); // delete the right most value ( last value inserted )
  // and returns the deleted value 
  
  int size(); // returns the count of values
  int memLength(); // returns memory length of the array
  ~Expandable(); // deconstructor -- called when deleting an object
  
  // data members
  private;
  int* ar; // hold the starting memory address of the array
  int length; // hold the length of the array
  // maximum number of values you can store
  int count; // the number of values currently stored
  // it is also the first available index
  
};
