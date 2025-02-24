#include "dynamic.h"

Dynamic::Dynamic(int l){
    ar = new int[l]; // memory for an integer array
    _size = l;
    count = 0;
    
}

Dynamic::~Dynamic(){
    delete[] ar; // deletes array pointed by array
    // varriables ar, lenght and count are deleted by the compiler
}

int Dynamic::size(){
    return count;
}

int Dynamic::memSize(){
    return _size;
}

void Dynamic::insert(int value){
    // there is space in the array
    if(count < _size){ // 0,1,2,3,4. if count count == 5, lenght == 5, there is no more space
        // insert to the right
        *(ar+count) = value; // ar[count] = value
    }
    else{
        // expand / add space
        // insert to the right
    }
    count++;
}

int Dynamic::findValue(int value){
    // finds if the value is stored. If yes, returns the index (if value exists multiple times, only return the index of first occurence)
    // if value isn't available, return -1
    
    for(int i = 0; i < _size; i++){
        if( value = *(ar + i)){
            return i;
        }
        
    }
    
    
}
