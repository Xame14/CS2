void insertionSort(int ar[], int start, int end)
{
    for(int i=start; i<=end; i++){  // go through each element
        for(int j = i; j > start; j--){ // not comparing start
            if(ar[j] < ar[j-1]) // if the current element is greater than the element on left
                swap(ar[j], ar[j-1]);
             else
                 break; // stop when correct position
        }
    }

}