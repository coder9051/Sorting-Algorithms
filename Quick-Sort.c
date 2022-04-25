// Quick sort in C
#include <stdio.h>

// function to find the partition position
int partition(int array[], int low, int high)
{
    int pivot, leftIndex, i, temp;
    
    // select the rightmost element as pivot
    pivot = array[high];
    
    // pointer for greater element
    leftIndex = -1;
    
    // traverse each element of the array 
    // compare them with the pivot
    for (i = 0; i < high; i++)
    {
        if (array[i] <= pivot)
        {
            // if element smaller than pivot is found 
            // swap it with the greater element pointed by leftIndex
            leftIndex++;
            
            // swap element at leftIndex with element at i
            temp = array[leftIndex];
            array[leftIndex] = array[i];
            array[i] = temp;
        }
    }
 
    // swap the pivot element with the greater element at leftIndex  
    temp = array[leftIndex+1];
    array[leftIndex+1] = array[high];
    array[high] = temp;
    
    // return the partition point
    return (leftIndex + 1);   
}

void quickSort(int array[], int low, int high)
{
    int index;
    if (low < high)
    {
        // find the pivot element such that 
        // elements smaller than pivot are on left of pivot 
        // elements greater than pivot are on right of
        index = partition(array, low, high);
        
        // recursive call on the left of pivot
        quickSort(array, low, index-1);
        
        // recursive call on the right of pivot
        quickSort(array, index+1, high);
    }
}

// function to print array elements 
void printArray(int array[], int size) 
{ 
    for (int i = 0; i < size; ++i)
    { 
        printf("%d ", array[i]); 
    } 
    printf("\n"); 
} 
// main function 
int main() 
{ 
    int data[] = {8, 7, 2, 1, 0, 9, 6}; 
    int n = sizeof(data) / sizeof(data[0]); 
    printf("Unsorted Array\n"); 
    printArray(data, n); 
    
    // perform quicksort on data 
    quickSort(data, 0, n - 1); 
    printf("Sorted array in ascending order: \n"); 
    printArray(data, n); 
}
