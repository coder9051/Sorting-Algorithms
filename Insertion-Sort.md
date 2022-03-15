# Insertion Sort
Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.

Insertion sort involves finding the right place for a given element in a sorted list. So in beginning we compare the first two elements and sort them by comparing them. Then we pick the third element and find its proper position among the previous two sorted elements. This way we gradually go on adding more elements to the already sorted list by putting them in their proper position.

## Algorithm

1. Assume that the first element in the list is in the sorted section of the list and remaining all elements are in the unsorted section.
2. Consider the first element from the unsorted list and insert that element into the sorted list in the order specified (ascending or descending)
3. Repeat the above steps until all the elements from the unsorted list are moved to the sorted list.

## Python Code
```python
# Create a function
def insertion_sort(array):
    
    # Star loop from index 1
    for i in range(1, len(array)):
        
        # Next element
        key = array[i]
        
        # Index of current element
        j = i-1
        
        # Compare key with each element on the left of it until an element smaller than it is found
        while j >= 0 and key < array[j]:
            array[j+1] = array[j]
            j -= 1
       
        # # Place key after the element just smaller than it.     
        array[j+1] = key
    
array = [1, 9, 45, 23, 12, 82, 67]
insertion_sort(array)
print(array)
```

## Time Complexity

**Worst Case Complexity**: O(n^2)

Suppose, an array is in ascending order, and you want to sort it in descending order. In this case, worst case complexity occurs.Each element has to be compared with each of the other elements so, for every nth element, (n-1) number of comparisons are made.

Thus, the total number of comparisons = n*(n-1) ~ n2

**Best Case Complexity** : O(n)

When the array is already sorted, the outer loop runs for n number of times whereas the inner loop does not run at all. So, there are only n number of comparisons. Thus, complexity is linear.

**Average Case Complexity** : O(n^2)

It occurs when the elements of an array are in jumbled order (neither ascending nor descending).

## Space Complexity
Space complexity is O(1) because an extra variable key is used.

## Conclusion
The insertion sort is used when the array is has a small number of elements or when there are only a few elements left to be sorted.
