#include <iostream>
using namespace std;
// scope specifier: private (default), public

class Character{
    //Data members: privat
    private:
    string name;
    int hp;
    int damage;
    string potions[10];
  
    // methods - functions that are memeber of a class: public
    public:
    // constructor
    Character(string);    //construct a character
    void printPotions();    //print potions
    void printDetails();    //print name and hp
    void attack(Character&);
    
    
};
