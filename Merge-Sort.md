# Merge Sort
Merge sort is similar to the quick sort algorithm as it uses the divide and conquer approach to sort the elements. It is one of the most popular and efficient sorting algorithm.

As the merge sort algorithm is an implementation of the divide and conquer technique. Thus, it gets completed in three steps:

1. Divide: In this step, the array/list divides itself recursively into sub-arrays until the base case is reached.

2. Recursively solve: Here, the sub-arrays are sorted using recursion.

3. Combine: This step makes use of the merge( ) function to combine the sub-arrays into the final sorted array.

## Algorithm

1. Find the middle index of the array.
        Middle = 1 + (last – first)/2
2. Divide the array from the middle.
3. Call merge sort for the first half of the array
        MergeSort(array, first, middle)
4. Call merge sort for the second half of the array.
        MergeSort(array, middle+1, last)
5. Merge the two sorted halves into a single sorted array.

## Python Code
```python
# Create merge function for implementation of mergesort
def merge_sort(array):
     if len(array) > 1:
         
         #  r is the point where the array is divided into two subarrays
         r = len(array)//2
         
         # first subarray
         L = array[:r]
         
         # second subarray
         R = array[r:]
         
         # Sort the two halves
         merge_sort(L)
         merge_sort(R)
         
         # Initial index of first subarray
         i = 0

         # Initial index of second subarray
         j = 0

         # Initial index of merged subarray
         k = 0
         
        # When we run out of elements in either L or R, pick up the remaining elements and put in A[p..r] 
         while i < len(L) and j < len(R):
            if L[i] < R[j]:
                array[k] = L[i]
                i += 1
                
            else:
                array[k] = R[j]
                j += 1
                
            k += 1
            
        # When we run out of elements in either L or R
        # Copy the remaining elements of L[], if there are any
         while i < len(L):
            array[k] = L[i]
            i += 1
            k += 1
            
         # Copy the remaining elements of L[], if there are any
         while j < len(R):
             array[k] = R[j]
             j += 1
             k += 1
             
def print_array(array):
    n = len(array)
    for i in range(n): 
        print(array[i], end=" ") 
    print() 
     
array = [1, 9, 45, 23, 12, 82, 67]
merge_sort(array)
print_array(array)
```

## Time Complexity
**Best Case Complexity** - It occurs when there is no sorting required, i.e. the array is already sorted. The best-case time complexity of merge sort is O(nlogn).

**Average Case Complexity** - It occurs when the array elements are in jumbled order that is not properly ascending and not properly descending. The average case time complexity of merge sort is O(nlogn).

**Worst Case Complexity** - It occurs when the array elements are required to be sorted in reverse order. That means suppose you have to sort the array elements in ascending order, but its elements are in descending order. The worst-case time complexity of merge sort is O(nlogn).

## Space Complexity
Mergesort, if implemented to create arrays in the recursive calls, will create many of them, but they won't coexist at the same time. In every recursive call you create an array (or 2 depending on an implementation) for merging and they take no more than O(n) space, and then when the merging is done, these arrays are deleted and some new ones will be created after a moment in some other recursive call. If you counted how much space all the arrays that ever have been created took, it'd be O(n log n), but you don't need to care about this information - you don't need more than O(n) space, because when you need to create an array, all the other ones don't longer exist and don't occupy any memory.

## Conclusion
Merge sort is not a space-efficient algorithm. It makes use of an extra O(n) space.In the case of smaller input size, merge sort works slower in comparison to other sorting techniques.If the data is already sorted, merge sort will be a very expensive algorithm in terms of time and space. This is because it will still traverse the whole array and perform all the operations.

Merge sort is one of the most widely used algorithms in data structures. Although it is not a space-efficient algorithm, its time complexity is of the order O(n logn) which is better than most of the sorting algorithms. Whenever we have an input size larger than the RAM size, we use merge sort. Thus, merge sort is very well suited for larger datasets.
