# Sorting-Algorithms
Here I have made a brief exaplnation on various types of sorting algorithm  and how to implement it using python.

## Installation
You require python IDE on your laptop/PC.

## Types of Sorting
Here is list of sorting algorithms which I have added to this repository along with with their brief explanation.

1. Bubble Sort
2. Insertion Sort
3. Selection Sort
4. Quick Sort
5. Merge Sort
6. Heap sort

## Basis of classification
Sorting algorithms can be categorized based on the following parameters:

1. Based on Number of Swaps or Inversion This is the number of times the algorithm swaps elements to sort the input.  Selection Sort  requires the minimum number of swaps.
2. Based on Number of Comparisons This is the number of times the algorithm compares elements to sort the input. Using Big-O notation, the sorting algorithm examples listed above require at least  O(nlogn) comparisons in the best case and  O(n^2)  comparisons in the worst case for most of the outputs.
3. Based on Recursion or Non-Recursion Some sorting algorithms, such as  Quick Sort , use recursive techniques to sort the input. Other sorting algorithms, such as  Selection Sort  or  Insertion Sort , use non-recursive techniques. Finally, some sorting algorithm, such as  Merge Sort , make use of both recursive as well as non-recursive techniques to sort the input.
4. Based on Stability Sorting algorithms are said to be  stable  if the algorithm maintains the relative order of elements with equal keys. In other words, two equivalent elements remain in the same order in the sorted output as they were in the input.
  - Insertion sort ,  Merge Sort , and  Bubble Sort  are stable
  - Heap Sort  and  Quick Sort  are not stable
5. Based on Extra Space Requirement Sorting algorithms are said to be  in place  if they require a constant  O(1)  extra space for sorting.
  - Insertion sort  and  Quick-sort  are  in place  sort as we move the elements about the pivot and do not actually use a separate array which is NOT the case in merge sort where the size of the input must be allocated beforehand to store the output during the sort.
  - Merge Sort  is an example of  out place  sort as it require extra memory space for its operations.

## Summary
Following are the various notations used for expressing time complexity:

**Big Oh Notation, O**: The notation Ο(n) is used to express the upper bound of an algorithm's running time.

**Omega Notation, Ω**: The notation Ω(n) is used to express the lower bound of an algorithm's running time.

**Theta Notation, θ**: The notation θ(n) lies between O(n) and Ω(n) and is used to express the exact asymptotic behavior of an algorithm’s running time.

|**Algorithm**|**Best case Time Complexity**|**Average case Time Complexity**|**Worst case Time Complexity**|**Space Complexity**|
| :---: | :---: | :---:| :---: | :---: |
| Bubble Sort | Ω(n) | θ(n^2) | O(n^2) | O(1) |
| Insertion Sort | Ω(n) | θ(n^2) | O(n^2) | O(1) |
| Selection Sort | Ω(n^2) | θ(n^2) | O(n^2) | O(1) |
| Quick Sort | Ω(n log(n)) | θ(n log(n)) | O(n^2) | O(n) |
| Merge Sort | Ω(n^2) | θ(n^2) | O(n log(n)) | O(n) |
| Heap Sort | Ω(n^2) | θ(n^2) | O(n log(n)) | O(1) |


## Conclusion
Sorting is an essential tool in any Pythonista’s toolkit. With knowledge of the different sorting algorithms in Python and how to maximize their potential, we can implement faster, more efficient apps and programs.

## Contribution
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.
