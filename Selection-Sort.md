# Selection Sort
A simple sorting algorithm is selection sort. This sorting method is based on in-place comparison and divides the list into two parts: the sorted part on the left end and the unsorted part on the right. The sorted section is initially empty, but the unsorted part contains the complete list.

The unsorted array's smallest element is chosen and swapped with the leftmost element, resulting in that element becoming a part of the sorted array. This operation continues to move the unsorted array boundary to the right by one element.

## Algorithm
1. In the selection sort, first of all, we set the initial element as a minimum.
2. Then we will compare the minimum with the second element. If the second element turns out to be smaller than the minimum, we will swap them, followed by assigning to a minimum to the third element.
3. Else if the second element is greater than the minimum, which is our first element, then we will do nothing and move on to the third element and then compare it with the minimum.
4. We will repeat this process until we reach the last element.
5. After the completion of each iteration, we will notice that our minimum has reached the start of the unsorted list.
6. For each iteration, we will start the indexing from the first element of the unsorted list. We will repeat the Steps from 1 to 4 until the list gets sorted or all the elements get correctly positioned.

## Python Code
```python

```

## Time Complexity
**Best Case Complexity**: The selection sort algorithm has a best-case time complexity of O(n^2) for the already sorted array.

**Average Case Complexity**: The average-case time complexity for the selection sort algorithm is O(n^2), in which the existing elements are in jumbled ordered, i.e., neither in the ascending order nor in the descending order.

**Worst Case Complexity**: The worst-case time complexity is also O(n^2), which occurs when we sort the descending order of an array into the ascending order.

In the selection sort algorithm, the time complexity is O(n^2) in all three cases. This is because, in each step, we are required to find minimum elements so that it can be placed in the correct position. Once we trace the complete array, we will get our minimum element.

## Space Complexity
Selection sort is an in-place algorithm.
It performs all computation in the original array and no other array is used.
Hence, the space complexity works out to be O(1).

## Conclusion
This algorithm is not suitable for large data sets as its average and worst case complexities are of Ο(n^2), where n is the number of items. But selection sort uses minimum number of swap operations O(n) among all the sorting algorithms.
