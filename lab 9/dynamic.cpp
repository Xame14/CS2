#include "dynamic.h"
#include <iostream>
using namespace std;

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
        expand();
        *(ar+count) = value;
    }
    count++;
}

int Dynamic::findValue(int value){
    // finds if the value is stored. If yes, returns the index (if value exists multiple times, only return the index of first occurence)
    // if value isn't available, return -1
    
    for(int i = 0; i < count; i++){
        if( *(ar + i) == value){
            return i;
        }
        
    }
    return -1;
}
    
void Dynamic::expand(){
    // double the memory
    _size = _size * 2;
    // create new array and store its address in br
    int *br = new int[_size]; // double size
    
    // copy values of original array into new array
    for(int i=0; i<count;i++){
        *(br+i) = *(ar+i); // br[i] = ar[i]
    }
    
    // release address of original array
    delete[] ar;
    
    // copy address of its new array(br) into ar
    ar = br;
}
//-------------------------- NEW -----------------------------------------

void Dynamic::insertAt(int index, int value){

    
    
}

int Dynamic::erase(){
    
    
}

void Dynamic::erase(int value){
    
    
    
    
}

int Dynamic::eraseAt(int index){
    
    
}
