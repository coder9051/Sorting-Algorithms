# Radix Sort
Radix sort is one of the sorting algorithms used to sort a list of integer numbers in order. In radix sort algorithm, a list of integer numbers will be sorted based on the digits of individual numbers. Sorting is performed from least significant digit to the most significant digit.

Radix sort algorithm requires the number of passes which are equal to the number of digits present in the largest number among the list of numbers. For example, if the largest number is a 3 digit number then that list is sorted with 3 passes.

## ALgorithm
The Radix sort algorithm is performed using the following steps...

1. Define 10 queues each representing a bucket for each digit from 0 to 9.
2. Consider the least significant digit of each number in the list which is to be sorted.
3. Insert each number into their respective queue based on the least significant digit.
4. Group all the numbers from queue 0 to queue 9 in the order they have inserted into their respective queues.
5. Repeat from step 3 based on the next least significant digit.
6. Repeat from step 2 until all the numbers are grouped based on the most significant digit.

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

# Main function to implement radix sort
def radix_sort(array):

  # Find the maximum number to know number of digits
  max_number = max(array)
  
  # Do counting sort for every digit. Note that instead of passing digit number, place is passed. place is 10^i where i is current digit number
  place = 1
  while max_number // place > 0:
    counting_sort(array, place)
    place *= 10

array = [18, 3, 41, 12, 9, 2, 56]
counting_sort(array)
print(array)

```

## Time Complexity
**Best Case Complexity** - It occurs when there is no sorting required, i.e. the array is already sorted. The best-case time complexity of Radix sort is Ω(n+k).

**Average Case Complexity** - It occurs when the array elements are in jumbled order that is not properly ascending and not properly descending. The average case time complexity of Radix sort is θ(nk).

**Worst Case Complexity** - It occurs when the array elements are required to be sorted in reverse order. That means suppose you have to sort the array elements in ascending order, but its elements are in descending order. The worst-case time complexity of Radix sort is O(nk).

## Space Complexity
Because Radix sort employs Counting sort, which uses auxiliary arrays of sizes n and k, where n is the number of elements in the input array and k is the largest element among the dth place elements (ones, tens, hundreds, and so on) of the input array. Hence, the Radix sort has a space complexity of (n+k).

## Conclusion
Radix Sort algorithm is a stable sorting subroutine-based integer sorting algorithm. It is a sorting algorithm that does not use comparisons to sort a collection of integers. It classifies keys based on individual digits with the same significant position and value.

If we take very large digit numbers or the number of other bases like 32-bit and 64-bit numbers then it can perform in linear time however the intermediate sort takes large space. This makes radix sort space inefficient. This is the reason why this sort is not used in software libraries.
