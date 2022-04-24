// C++ program for Merge Sort 
#include<stdio.h>

// Merges two subarrays of array[]. 
// First subarray is arr[begin..mid] 
// Second subarray is arr[mid+1..end] 
void merge(int array[], int low, int mid, int high)
{
    int i, j, k, n1, n2;
    n1 = mid - low + 1;
    n2 = high - mid;
   
    /* create temp arrays */
    int left[n1], right[n2];

    /* Copy data to temp arrays left[] and right[] */
    for (i = 0; i < n1; i++)
    {
        left[i] = array[low + i];
    }

    for (i = 0; i < n2; i++)
    {
        right[i] = array[mid + 1 + i];
    }
    
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = low; // Initial index of merged subarray

    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            array[k] = left[i];
            i++;
        }
        else
        {
            array[k] = right[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of left[], if there are any */
    while (i < n1)
    {
        array[k] = left[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there are any */
    while (j < n2)
    {
        array[k] = right[j];
        j++;
        k++;
    }
}

 
/* low is for left index and high is right index of the 
sub-array of arr to be sorted */

void mergeSort(int array[], int low, int high)
{
    if (low < high)
    {
        int mid;
        mid = (low + high)/2;

        // Sort first and second halves
        mergeSort(array, low, mid);
        mergeSort(array, mid + 1, high);
   
        merge(array, low, mid, high);
    }
}

/* Function to print an array */
void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

// Driver Code
int main()

{
    int size, i;
    printf("\nEnter the number of elements: ");
    scanf("%d", &size);

    int array[size];
    for (i = 0; i < size; i++)
    {
        printf("\nEnter number: ");
        scanf("%d", &array[i]);
    }

    mergeSort(array, 0, size - 1);
    printArray(array, size);

    return 0;
}


