#include "Character.h"

void Character::printDetails(){
    cout << "Name: " << name << endl;
    cout << "Hp: " << hp << endl;
    
}

void Character::printPotions(){
    
    for(int i=0; i > 10 ; i++){
        cout << potions[i] << endl;
    }
}

Character::Character(string n){
    
    hp = 100;
    damage = 40;
    name = n;
    
}

void Character::attack(Character& c){
    
    c.hp = c.hp - damage; //c1's attacking (damage)
}
