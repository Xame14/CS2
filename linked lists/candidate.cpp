#include "candidate.h"

Candidate::Candidate(string n, string r)
{name = n; role = r;}
void Candidate::display()
{
  cout << name << " is a " << role << endl;
}
string Candidate::getRole()
{
  return role;
}