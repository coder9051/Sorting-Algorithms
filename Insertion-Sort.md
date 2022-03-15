# Insertion Sort
Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.

Insertion sort involves finding the right place for a given element in a sorted list. So in beginning we compare the first two elements and sort them by comparing them. Then we pick the third element and find its proper position among the previous two sorted elements. This way we gradually go on adding more elements to the already sorted list by putting them in their proper position.

## Algorithm

1. Assume that the first element in the list is in the sorted section of the list and remaining all elements are in the unsorted section.
2. Consider the first element from the unsorted list and insert that element into the sorted list in the order specified (ascending or descending)
3. Repeat the above steps until all the elements from the unsorted list are moved to the sorted list.

## Python Code
```python

```

## Time Complexity

**Worst Case Complexity**: O(n^2)

Suppose, an array is in ascending order, and you want to sort it in descending order. In this case, worst case complexity occurs.

Each element has to be compared with each of the other elements so, for every nth element, (n-1) number of comparisons are made.

Thus, the total number of comparisons = n*(n-1) ~ n2

**Best Case Complexity** : O(n)

When the array is already sorted, the outer loop runs for n number of times whereas the inner loop does not run at all. So, there are only n number of comparisons. Thus, complexity is linear.

**Average Case Complexity** : O(n^2)

It occurs when the elements of an array are in jumbled order (neither ascending nor descending).

## Space Complexity
Space complexity is O(1) because an extra variable key is used.

## Conclusion
The insertion sort is used when the array is has a small number of elements or when there are only a few elements left to be sorted.
