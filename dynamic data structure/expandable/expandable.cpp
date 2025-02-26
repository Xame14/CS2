#include "expandable.h"

Expandable::Expandable(int l){
    ar = new int[l]; // memory for an integer array
    length = l;
    count = 0;
    
}

Expandable::~Expandable(){
    delete[] ar; // deletes array pointed by array
    // varriables ar, lenght and count are deleted by the compiler
}

int Expandable::size(){
    return count;
}

int Expandable::memlenght(){
    return length;
}

void Expandable::insert(int value){
    // there is space in the array
    if(count < length){ // 0,1,2,3,4. if count count == 5, lenght == 5, there is no more space
        // insert to the right
        *(ar+count) = value; // ar[count] = value
    }
    else{
        // expand / add space
        // insert to the right
    }
    counter++;
}

int Expandable::erase(){ // deletes the rightmost value and returns that value
    
    // if you do not have a value // notthing had changed // return a default value
    // do not update the count
    if(count == 0){
        
        return -1;
        // do not update count
    }
    else{
        //index will be count-1 for the rightmost value
        int temp = *(ar + count-1); // int temp = ar(count -1)
        count--;
        return temp;
    }
    
    
    // if you have a value// delete that value // return that value
    // update count
    count--;
}
