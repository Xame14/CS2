#include <iostream>
using namespace std;
#ifndef CANDIDATE_H
#define CANDIDATE_H
class Candidate{
  public:
    Candidate(string n, string r);
    void display();
    string getRole();
  private:
    string name;
    string role;
};
#endif