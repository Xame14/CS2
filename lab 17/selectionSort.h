int minIndex(int ar[], int startI, int end) // to find smallest value
{
    int minI = startI; // start smallest as first indext
    for(int i = startI; i <= end; i++)
    {
        if(ar[i] < ar[minI]) // if new value is smaller make it the min index
            minI = i;
    }
    return minI; //return the small index
}

void selectionSort(int ar[], int start, int end)
{
    if(start >= end) // base case
        return;
    int minI = minIndex(ar, start, end); // find smallest value
    swap(ar[start], ar[minI]); // swap smallest value with current index
    
    selectionSort(ar, start+1, end); //recusion for the rest
}
