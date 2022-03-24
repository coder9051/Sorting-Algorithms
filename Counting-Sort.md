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
# Create Function for Counting sort
def counting_sort(array):

  size = len(array)

  # Create a list of size of array which will be the sorted list
  sorted_array = [0]*size

  # Create a count array of size of maximum of array to store count of individual numbers and initialize count array as 0
  count = [0]*(max(array)+1)

  # Store the count of each elements in count array
  for i in range(size):
    count[array[i]] += 1

  # Store the cummulative count
  # count[i] now contains the number of elements equal to i i.e. actual position of this character in output array
  for i in range(1, len(count)):
    count[i] += count[i-1]

  # Find the index of each element of the original array in count array place the elements in output array
  i = size - 1
  while i >= 0:
    sorted_array[count[array[i]] - 1] = array[i]
    count[array[i]] -= 1
    i -= 1
  # Copy the sorted elements into original array
  for i in range(size):
    array[i] = sorted_array[i]

array = [18, 3, 41, 12, 9, 2, 56]
counting_sort(array)
print(array)
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
