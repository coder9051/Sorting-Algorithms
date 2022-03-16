# Quick Sort
Quick sort is also based on the concept of dividing the input array or list. But it is often the most preferred sorting algorithm because it is potentially more efficient to use than Merge Sort and does not require any extra storage space. It begins by dividing the list and picking one value, known as the pivot. This value is considered to be in its correct sorting place. Naturally, all other list values that are smaller are moved to the left and the ones that are larger are moved to the right. The values are then recursively sorted until they are in the correct order.

## Algorithm
### Partitioning Algorithm
1. Choose the highest index value has pivot.
2. Take two variables to point left and right of the list excluding pivot.
3. Left points to the low index.
4. Right points to the high.
5. While value at left is less than pivot move right.
6. While value at right is greater than pivot move left.
7. If both step 5 and step 6 does not match swap left and right.
8. If left ≥ right, the point where they met is new pivot.

### Sorting Algorithm
1. Make the right-most index value pivot.
2. Partition the array using pivot value.
3. Quicksort left partition recursively.
4. Quicksort right partition recursively.

## Python Code
```python

```

## Time Complexity
**Best Case Complexity** - In Quicksort, the best-case occurs when the pivot element is the middle element or near to the middle element. The best-case time complexity of quicksort is O(nlogn).

**Average Case Complexity** - It occurs when the array elements are in jumbled order that is not properly ascending and not properly descending. The average case time complexity of quicksort is O(nlogn).

**Worst Case Complexity** - In quick sort, worst case occurs when the pivot element is either greatest or smallest element. Suppose, if the pivot element is always the last element of the array, the worst case would occur when the given array is sorted already in ascending or descending order. The worst-case time complexity of quicksort is O(n^2).

## Space Complexity
Quicksort is an in-place sorting algorithm where we are not using extra space in the code. But as we know, every recursive program uses a call stack in the background to execute the recursion. So the space complexity of the quick sort depends on the size of the recursion call stack, which is equal to the height of the recursion tree. As we know from the above analysis, the height of the recursion tree depends on the partition process.

In the worst-case scenario, the partition is always unbalanced, and there will be only 1 recursive call at each level of recursion. In such a scenario, the generated tree is skewed in nature. So the height of the tree = O(n) and recursion requires a call stack of size O(n). The worst-case space complexity of the quick sort = O(n).

The partition is always balanced in the best-case scenario, and there will be 2 recursive calls at each recursion level. In such a scenario, the generated tree is balanced in nature. So the height of the tree = O(logn), and recursion requires a call stack of size O(logn). The best-case space complexity of the quick sort = O(logn).

## Conclusion
In short Quicksort picks an element as pivot, and then it partitions the given array around the picked pivot element. After that, left and right sub-arrays are also partitioned using the same approach. It will continue until the single element remains in the sub-array.

Quicksort algorithm is used when

* the programming language is good for recursion
* time complexity matters
* space complexity matters
