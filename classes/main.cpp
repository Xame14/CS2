#include "Character.h"

int main()
{
    string n1, n2;
    cout << "Enter names for C1 and c2: ";
    cin >> n1 >> n2;
    
    //https://www.onlinegdb.com/#editor_1 Instantiating an object
    Character c1(n1), c2(n2); //objects
    
    c1.printDetails();
    
    c2.printPotions();
    
    c2.printDetails(); //hp = 100
    
    c1.attack(c2);
    
    c2.printDetails(); //hp = 60
    
    c2.attack(c1);

    return 0;
}
