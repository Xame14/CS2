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


void Dynamic::insertAt(int index, int value){

    if(count == _size){
        expand();
    }
    if(index >= count || index < 0){ // to the right of existing
        *(ar + count) = value;
    }
    else{
        for(int i = count-1; i >=index;i--){ // shift values
            *(ar+i+1) = *(ar+i);
        }
        *(ar + count) = value;
    }
    count++;
    
}

int Dynamic::erase(){
    if(count == 0){ // array is empty
        return -1;
    }
    
    int temp = *(ar+count-1); // rightmost
    *(ar +count-1) = 0; // optional
    count--;
    return temp;
    
}

void Dynamic::erase(int value){
    
    int index = findValue(value);
    
    while(index != -1){
        eraseAt(index);
        index = findValue(value);
    }
    
    
}

int Dynamic::eraseAt(int index){
    
    if(index < 0 || index >= count){ // also checks for count == 0
        return -1;
    }
    int temp = *(ar+index); // ar[index]
    for(int i = index +1;index <= count; i++){
        *(ar+ i - 1) = *(ar+i);
    }
    
    
    count--;
    return temp;
}
