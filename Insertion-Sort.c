#include <stdio.h>

// Function for Insertion Sort
void insertionSort(int array[], int n)
{
    int i, j, key;
    
    // loop through array
    for(i = 1; i < n; i++)
    {
        // Create a variable for the element and set it equal to the
        // previous elements index 
        key = array[i];
        j = i - 1;
        
        // loop backward while index ie greater than or equal to zero ann
        // the current element is greater than the temp variable
        while (j >= 0 && key < array[j])
        {
            // set next element equal to current element
            array[j+1] = array[j];
            j = j - 1;
        }
        
        // set next element equal to key element
        array[j+1] = key;
    }
}

// Function to print array
void printArray(int array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ",array[i]);
}

// drivers code
int main()
{
    int a[] = {5, 3, 9, 2, 8};
    int size = 5;
    insertionSort(a, size);
    printArray(a, size);
}
