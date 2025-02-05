#include "pokemon.h"

Pokemon::Pokemon(string name, int ndex, string type1){
    _name = name;
    _ndex = ndex;
    types[0] = type1;
    types[1] = "null";
    
}

Pokemon::Pokemon(string name, int ndex, string type1, string type2){
    _name = name;
    _ndex = ndex;
    types[0] = type1;
    types[1] = type2;
}

string Pokemon::name(){
    return _name;
}

int Pokemon::Ndex(){
    return _ndex;
}

string Pokemon::type1(){
    return types[0];
}

bool Pokemon::is_multitype(){
    if(types[1] == "null"){
        return false;
    }
    else{
        return true;
    }
}

string Pokemon::type2(){
    if(types[1] != "null"){
      return types[1];  
    }
    else{
        return " ";
    }
}

float Pokemon::damage_multiplier(string attack_type){
    
    float dmg;
    if(attack_type == "Normal"){
        dmg = 1.0;
    }
    else if(attack_type == "Fighting"){
        if(types[0] == "Normal"){
            dmg = 2.0;
        }
        else if(types[0] == "Flying" ||types[0] == "Poison"){
            dmg = 0.5;
        }
        else{
           dmg = 1.0; 
        }
    }
    else if(attack_type == "Flying"){
        if(types[0] == "Fighting"){
            dmg = 2.0;
        }
        else{
            dmg = 1.0;
        }
    }
    else{
        if(types[0] == "Poison"){
            dmg = 0.5;
        }
        else{
            dmg = 1.0;
        }
    }
    if(is_multitype() == true){
        if(attack_type == "Normal"){
            dmg = dmg * 1.0;
        }
        else if(attack_type == "Fighting"){
            if(types[0] == "Normal"){
                dmg = dmg * 2.0;
            }
            else if(types[0] == "Flying" ||types[0] == "Poison"){
                dmg = dmg * 0.5;
            }
            else{
                dmg = dmg * 1.0; 
            }
        }
        else if(attack_type == "Flying"){
            if(types[0] == "Fighting"){
                dmg = dmg * 2.0;
            }
            else{
                dmg = dmg * 1.0;
            }
        }
        else{
            if(types[0] == "Poison"){
            dmg = dmg * 0.5;
            }
            else{
                dmg = dmg * 1.0;
            }
        } 
    }
    return dmg;
}

    // Normal attacks: 1.0 against all Pokemon defending types.
    // Fighting attacks: 2.0 against Normal, 0.5 against Flying or Poison, 1.0 against Fighting.
    // Flying attacks: 1.0 against all defending types except Fighting, 2.0 against Fighting.
    // Poison attacks: 1.0 against all types except Poison, 0.5 against Poison.

//int _ndex;			// Stores the Pokemon's Ndex
//string _name;		// Stores the Pokemon's name 
//string types[2];	// Array's 1st element stores type 1. When there is a second type, array's 2nd element stores type 2
//int type_count;
