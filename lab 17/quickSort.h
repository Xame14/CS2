int partition(int ar[], int start, int end)
{
    if(start > end)
        return start;
    int pivot = ar[end]; // taking the last element as the pivot

    int pIndex = start; // pIndex will finally store the location for pivot. We start at the front.
    for(int i=start; i<=end-1; i++) // if all elements are smaller, pIndex will be end, so we don't include that in comparison
    {
        if(ar[i] < pivot)
        {
            swap(ar[i], ar[pIndex]);// if elements are smaller move them to the left.
            pIndex++;
        }
    }
    swap(ar[pIndex], ar[end]);
    return pIndex;
}

void quickSort(int ar[], int start, int end)
{
    if(start >= end) // base case
        return;
    int pIndex = partition(ar, start, end);
    quickSort(ar, start, pIndex-1); // break array for values < pivot
    quickSort(ar, pIndex+1, end); // break array for values > pivot
}
