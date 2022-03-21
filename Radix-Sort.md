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