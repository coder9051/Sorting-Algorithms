# Counting Sort
Counting sort is a sorting algorithm that sorts the elements of an array by counting the number of occurrences of each unique element in the array. The count is stored in an auxiliary array and the sorting is done by mapping the count as an index of the auxiliary array.

This sorting technique doesn't perform sorting by comparing elements. It performs sorting by counting objects having distinct key values like hashing. After that, it performs some arithmetic operations to calculate each object's index position in the output sequence. Counting sort is not used as a general-purpose sorting algorithm.

## Algorithm
1. Iterate through the input array to find the highest value.
2. Declare a new array with the value 0 and a size of max+1.
3. Count each element in the array and increment its value in the auxiliary array generated at the corresponding index.
4. Add current and previous frequency to the auxiliary array to find the cumulative sum.
5. The cumulative value now represents the element's actual position in the sorted input array.
6. Begin iterating through the auxiliary array from 0 to max.
7. Put 0 at the corresponding index and reduce the count by 1, which will indicate the element's second position in the input array if it exists.
8. Now put the array you got in the previous step into the actual input array.

## Python Code
```python
```

## Time Complexity
**Best Case Complexity** - It occurs when there is no sorting required, i.e. the array is already sorted. The best-case time complexity of counting sort is O(n + k).

**Average Case Complexity** - It occurs when the array elements are in jumbled order that is not properly ascending and not properly descending. The average case time complexity of counting sort is O(n + k).

**Worst Case Complexity** - It occurs when the array elements are required to be sorted in reverse order. That means suppose you have to sort the array elements in ascending order, but its elements are in descending order. The worst-case time complexity of counting sort is O(n + k).

In all above cases, the time complexity of counting sort is same. This is because the algorithm goes through n+k times, regardless of how the elements are placed in the array.

## Space Complexity
The space complexity of Counting Sort is O(max). Larger the range of elements, larger is the space complexity.

## Conclusion
Counting sort assumes that each of the nn input elements in a list has a key value ranging from 00 to kk, for some integer kk. For each element in the list, counting sort determines the number of elements that are less than it. Counting sort can use this information to place the element directly into the correct slot of the output array.

The majority of sorting algorithms run in quadratic time (O(n2), except the heap, and merge sort, which runs in time (O(n log n). The only sorting method that works in linear time is counting sort.

Because no items are compared, it is superior to comparison-based sorting approaches.

Because counting sort is good for sorting well-defined, finite, and tiny numbers, it can be used as a subprogram in other sorting algorithms like radix sort, which is suitable for sorting numbers with a wide range.
