#include "variablelength.h"
VariableLength::VariableLength(int initialL){
    
    ar = new int[initialL];
    length = initialL;
    count = 0;
}

VariableLength::~VariableLength(){
 
    // release ar, length, count
}

int VariableLength::size(){
    return count;
}

int VariableLength::memSize(){
    return length;
}

int VariableLength::findValue(int v){
    // linear search
    for(int i = 0; i < count;i++){
        if(*(ar + i) == v)
            return i;
    }
    return -1;
}

void VariableLength::insert(int v){
   // if no space is available:
    if(count == length){
        expand();
    }
   *(ar + count) = v; // ar[count] = v;
   count++;
}

void VariableLength::expand(){
    // double the memory
    length = length * 2;
    // create new array and store its address in br
    int *br = new int[length]; // double size
    
    // copy values of original array into new array
    for(int i=0; i<count;i++){
        *(br+i) = *(ar+1); // br[i] = ar[i]
    }
    
    // release address of original array
    delete[] ar;
    
    // copy address of its new array(br) into ar
    ar = br;
}

//int VariableLength::erase(){
    
//}


