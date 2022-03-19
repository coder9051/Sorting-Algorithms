# Create a heapify function
# To heapify subtree rooted at index i.
# n ---> size of heap
def heapify(array, n, i):
  # Initialize largest as root
  largest = i

  # left
  l = 2 * i + 1

  # right
  r = 2 * i + 2

  # Check if left child of root exists and is greater than root
  if (l < n) and (array[largest] < array[l]):
    largest = l

  # Check if right child of root exists and is greater than root
  if (r < n) and (array[largest] < array[r]):
    largest = r

  # If root is not largest, swap with largest and continue heapifying
  if largest != i:
    array[i], array[largest] = array[largest], array[i]

    # Heapify the root.
    heapify(array, n, largest)

# Create main function (heap_sort) to sort an array of given size
def heap_sort(array):
  n = len(array)

  # Build maxheap
  for i in range(n//2 - 1, -1, -1):
    heapify(array, n, i)

  for i in range(n-1, 0, -1):

    # Swap
    array[i], array[0] = array[0], array[i]

    # Heapify root element
    heapify(array, i, 0)


array = [18, 3, 41, 12, 9, 0, 56]
heap_sort(array)
n = len(array)
for i in range(n):
  print("%d " % array[i], end='')

