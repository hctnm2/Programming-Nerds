#include <iostream>
using namespace std;

// Swap the value stored at the addresses passed
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 
// Processes the quicksort partition from index low to high
int partition (int arr[], int low, int high)
{
    int pivot = arr[low]; //quicksort pivot
    int part = low + 1; //tracks the lowest index with a value > pivot
    int i = low + 1; //index being checked

    while(i <= high)
    {
        //swap values less than pivot into lower partition
        if(arr[i] <= pivot)
            swap(arr[part++], arr[i]);
        i++;
    }
    swap(arr[low], arr[(part - 1)]);
    return (part - 1);
}
 
// Quicksort sorting algorithm
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
 
// Print out the contents of an array
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
// Test quicksort implementation
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5, 2, 4, 3, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    cout << "Sorted array: " << endl;
    printArray(arr, n);
    return 0;
}
