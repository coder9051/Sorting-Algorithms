# Bubble Sort
Bubble Sort is a sorting algorithm that compares two neighbouring values to sort list items in ascending order. If the first value is greater than the second, the first value occupies the second slot, and the second value takes the first position. If the first value is less than the second, no switching takes place.

This is performed until all of the values in a list have been compared and, if required, swapped. A pass is the term used to describe each repetition. In a bubble sort, the number of passes is equal to the number of elements in the list minus one.

## Algorithm

The bubble sort algorithm works as follows

1. Get the total number of elements.

2. Determine the number of outer passes (n – 1) to be done.

3. Perform inner passes (n – 1) times for outer pass 1. Get the first element value and compare it with the second value. If the second value is less than the first value, then swap the positions

4. Repeat step 3 passes until you reach the outer pass (n – 1). Get the next element in the list then repeat the process that was performed in step 3 until all the values have been placed in their correct ascending order.

5. Return the results of the sorted list.

## Python Code
```python
# Create a function
def bubble_sort(array):
    # Find length of array
    n = len(array)

    # Outer loop
    for i in range(n-1):

        # Inner loop
        for j in range(n-1):

            # check element if element is greater than next, it gets swapped
            if array[j] > array[j+1]:

                #Swapping
                array[j], array[j+1] = array[j+1], array[j]

                
array = [8, 9, 6, 54, 2, 81, 8]

# Call Function
bubble_sort(array)

print(array)
```

## C code
```c
// Bubble sort in C
#include <stdio.h>

// Create the bubble sort function
void bubbleSort(int n, int array[])

{

    int i, j, temp;

    // loop to access each array element
    for (i = 0; i < n - 1; i++)
    {
        // loop to compare array elements
        for (j = 0; j < n - i -1; j++)
        {
            // compare two adjacent elements 
            // change > to < to sort in descending order
            if (array[j] > array[j+1])
            {
                // swapping occurs if elements 
                // are not in the intended order
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

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
    bubbleSort(size, a);
    printArray(a, size);
}
```

## Time Complexity
The time complexity of the bubble sort is O(n2)

**Worst case** – This is where the list provided is in descending order. The algorithm performs the maximum number of executions which is expressed as Big-O O(n^2)

**Best case** – This occurs when the provided list is already sorted. The algorithm performs the minimum number of executions which is expressed as Big-Omega Ω(n)

**Average case** – This occurs when the list is in random order. The average Complexity is represented as Big-theta ⊝(n^2)

## Space Complexity
The space complexity measures the amount of extra space that is needed for sorting the list. The bubble sort only requires one (1) extra space for swapping values. Therefore, it has a space complexity of O (1).

## Conclusion
Due to its simplicity, bubble sort is often used to introduce the concept of a sorting algorithm. 
In computer graphics it is popular for its capability to detect a very small error (like swap of just two elements) in almost-sorted arrays and fix it with just linear complexity (2n)
