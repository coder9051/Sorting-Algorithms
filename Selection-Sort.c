// Selection sort in C
#include <stdio.h>

// function to sort array using Selection sort
void selectionSort( int array[], int n)
{
    int i, j, minIndex, temp;

    for (i = 0; i < n; i++)
    {
        minIndex = i;
        for (j = i+1; j < n; j++)
        {
            // To sort in descending order, change > to < in this line. 
            // Select the minimum element in each loop.
            if (array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }
        // put min at the correct position
        temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
}

// function to print an array
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
    selectionSort(a, size);
    printArray(a, size);
}
