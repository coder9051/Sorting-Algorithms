# Heap Sort
Heap Sort is a popular and efficient sorting algorithm in computer programming. Learning how to write the heap sort algorithm requires knowledge of two types of data structures - arrays and trees. Heap sort works by visualizing the elements of the array as a special kind of complete binary tree called a heap.

### What is Heap?
Heap is a special tree-based data structure. A binary tree is said to follow a heap data structure if

* it is a complete binary tree
* All nodes in the tree follow the property that they are greater than their children i.e. the largest element is at the root and both its children and smaller than the root and so on. Such a heap is called a max-heap. If instead, all nodes are smaller than their children, it is called a min-heap

### What is Heapify?
The process of reshaping a binary tree into a Heap data structure is known as heapify. A binary tree is a tree data structure that has two child nodes at max. If a node’s children nodes are heapified, then only heapify process can be applied over that node. A heap should always be a complete binary tree, i.e., except the bottom level of the tree, all the levels are completely filled. The bottom level is filled from left to right. Bottom-up order should be used to perform heapification.

## Algorithm
1. Construct a Binary Tree with given list of Elements.
2. Transform the Binary Tree into Min Heap.
3. Delete the root element from Min Heap using Heapify method.
4. Put the deleted element into the Sorted list.
5. Repeat the same until Min Heap becomes empty.
6. Display the sorted list.

## Python Code
```python

```

## Time Complexity
**Best Case Complexity** - It occurs when there is no sorting required, i.e. the array is already sorted. The best-case time complexity of heap sort is O(n logn).

**Average Case Complexity** - It occurs when the array elements are in jumbled order that is not properly ascending and not properly descending. The average case time complexity of heap sort is O(n log n).

**Worst Case Complexity** - It occurs when the array elements are required to be sorted in reverse order. That means suppose you have to sort the array elements in ascending order, but its elements are in descending order. The worst-case time complexity of heap sort is O(n log n).

The time complexity of heap sort is O(n logn) in all three cases (best case, average case, and worst case). 

## Space Complexity
Heap sort is an in-place algorithm; it doesn't require any extra space. Elements are rearranged during each recursive only inside the same array.
It provides a perception that a binary heap or tree is being formed, but in real scenario no tree or heap is being formed.

## Conclusion
The primary advantage of the heap sort is its efficiency. 
- Execution time efficiceny: O(n log n)
- Memory efficieny: O(1)
The heap sort algorithm is not recursive

Heap sort algorithm is in place
In-place algorithm: an algorithm that transforms input using a data structure with a small, constant amount of storage space

Best at sorting huge sets of items because it doesn’t use recursion
If the array is partially sorted, Heap Sort generally performs much better than quick sort or merge sort.

Generally slower than quick and merge sorts
