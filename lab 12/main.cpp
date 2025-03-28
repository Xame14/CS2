//#include <iostream>
//using namespace std;
#include "candidateStack.h"
#include "candidateQueue.h"

inline void _test(const char *expression, const char *file, int line) {
  cerr << "test(" << expression << ") failed in file " << file << ", line "
       << line << "." << endl;
  // abort();
}

#define test(EXPRESSION)                                                       \
  ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))

int main() {
  Candidate* daniela = new Candidate("Daniela", "Developer");
  Candidate* daria = new Candidate("Daria", "Developer");
  Candidate* hector = new Candidate("Hector", "Salesman");
  Candidate* hugo = new Candidate("Hugo", "Salesman");
  Candidate* berta = new Candidate("Berta", "Designer");
  Candidate* bernardo = new Candidate("Bernardo", "Designer");

  CandidateStack s;
  CandidateQueue q;
  s.push(daniela);
  s.push(hector);
  s.push(berta);
  q.push(daria);
  q.push(hugo);
  q.push(bernardo);

  test(s.size() == 3);
  test(q.size() == 3);
  cout << "Candidates stored in Stack:"<<endl;
  s.candidates();
  /*
  Your output should be:
  Berta is a Designer
  Hector is a Salesman
  Daniela is a Developer
    */
  cout << "Candidates stored in Queue:"<<endl;
  q.candidates();
  /*
  Your output should be:
  Daria is a Developer
  Hugo is a Salesman
  Bernardo is a Designer
    */
  
  test(s.pop()->getRole()=="Designer");
  test(q.pop()->getRole()=="Developer");
  test(s.top()->getRole()=="Salesman");
  test(q.front()->getRole()=="Salesman");
  test(q.rear()->getRole()=="Designer");
  test(s.size() == 2);
  test(q.size() == 2);

  cout << "Candidates left in Stack:"<<endl;
  s.candidates();
  /*
  Your output should be:
  Hector is a Salesman
  Daniela is a Developer
  
    */
  cout << "Candidates left in Queue:"<<endl;
  q.candidates();
  /*
  Your output should be:
  Hugo is a Salesman
  Bernardo is a Designer
    */

  cout << "Assignment complete. Check your output with the comments given above." << endl;
}
