#include "dynamic.h"
#include <cstdlib>
#include <iostream>
using namespace std;

inline void _test(const char *expression, const char *file, int line) {
  cerr << "test(" << expression << ") failed in file " << file << ", line "
       << line << "." << endl;
  // abort();
}

#define test(EXPRESSION)                                                       \
  ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))

int main() {
  // create a dynamic object
  Dynamic d1(5);
  // insert values
  d1.insert(20);
  d1.insert(50);
  //lets test the size
  test(d1.size() == 2);
  test(d1.memSize() == 5);
  d1.insert(10);
  d1.insert(100);
  d1.insert(-5);
  d1.insert(8);
  test(d1.size() == 6);
  test(d1.memSize() == 10);
  // testing search operation
  test(d1.findValue(100) == 3);
  test(d1.findValue(40) == -1);
  d1.insert(3);
  d1.insert(-5);
  test(d1.findValue(-5) == 4);
  d1.insert(90);
  d1.insert(4);
  d1.insert(82);
  test(d1.size() == 11);
  test(d1.memSize() == 20);

  // new test cases
  d1.insertAt(11, 500);
  test(d1.findValue(500) == 11);
  d1.insertAt(15, 25);
  test(d1.findValue(25) == 12);
  d1.insertAt(3, -100);
  test(d1.findValue(-100) == 3);
  test(d1.findValue(25) == 13);
  test(d1.findValue(500) == 12);
  d1.eraseAt(6);
  test(d1.findValue(8) == -1);
  test(d1.findValue(500) == 11);
  d1.insert(4);
  test(d1.findValue(4) == 9);
  
  // let's test erase function()
  test(d1.findValue(100) == 4);
  d1.erase(100);
  test(d1.findValue(100) == -1);
  d1.erase(4);
  test(d1.findValue(4) == -1);
  test(d1.erase() == 25);

  cout << "Assignment complete." << endl;
  
}
