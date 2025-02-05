#include <iostream>

using namespace std;
#include "rectangle.h"
inline void _test(const char *expression, const char *file, int line) {
  cerr << "test(" << expression << ") failed in file " << file << ", line "
       << line << "." << endl;
}

#define test(EXPRESSION)                                                       \
  ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))

int main() {
  Rectangle r1(2, 6), r2(4.5, 3);
  test(r1.getLength() == 2);
  test(r1.getWidth() == 6);
  test(r1.getArea() == 12);
  test(r2.getLength() == 4.5);
  test(r2.getWidth() == 3);
  test(r2.getArea() == 13.5);

  r1.print();
  r2.print();
  cout << "Lab complete." << endl;
}
