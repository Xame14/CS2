void merge(int ar[], int start, int midIndex, int end)
{
    // left half includes the value at midIndex
    int lSize = midIndex - start + 1; // compute the number of elements in left half
    int rSize = end - (midIndex+1) + 1; // end-mid // compute the number of elements in right half

    int *leftArray = new int[lSize]; // create temp array to store left half elements
    for(int i=0; i<lSize; i++) // copying all values from a(left-half) into leftarray
    leftArray[i] = ar[start+i];

    int* rightArray = new int[rSize]; // create temp array to store right half elements
    for(int i=0; i<rSize; i++) // copying all values from a(right-half) into rightarray
    rightArray[i] = ar[midIndex+1+i];

    // now we merge into original array ar

    // combine values from leftArray and rightArray into ar
    int lI = 0, rI = 0, i = start; // lI is counter for leftArray, and rI is counter for rightArray
    // i is the index of the original array ar
    while(lI<lSize && rI<rSize) // as long as both arrays have values
    {
        // REMEMBER: leftArray and rightArray are already sorted
        // store one or the other value
        if(leftArray[lI] <= rightArray[rI]) // if front element of left array is small or equal to front element of right array
        {
            ar[i] = leftArray[lI]; // store value from leftArray
            lI++;//go to next value in leftArray
        }
        else{//otherwise
            ar[i] = rightArray[rI]; // store value from rightArray
            rI++;//go to next value in rightArray
        }
        i++;//whenever storing a value in ar, increment i
    }
    // the upper loop will end when either(or both) of those arrays are done.

    while(lI < lSize) // if left still had values, copy remaining values
    {
        ar[i] = leftArray[lI];
        lI++; 
        i++;
    }
    while(rI < rSize) // if right still had values, copy remaining values
    {
        ar[i] = rightArray[rI];
        rI++;
        i++;
    }
     // delete the memory of temporary arrays
    delete[] leftArray;
    delete[] rightArray;
}
void mergeSort(int ar[], int start, int end)
{
    if(start >= end) // don't sort if you have 0 or 1 element left
        return;
    
    int midIndex = (start+end)/2;
    // only include middle value on one of the recursive calls
    mergeSort(ar, start, midIndex); // sort left half (including middle value)
    mergeSort(ar, midIndex+1, end); // sort right half (excluding middle value)
    merge(ar, start, midIndex, end); // merge the arrays together
}