# Create a function to find partition position
# array[ ] ---> Array to be sorted
# low ---> Starting index
# high ---> Ending index
def partition_pos(array, low, high):
    
    # Set the rightmost element as pivot
    pivot = array[high]
    
    # Index of smaller element
    i = low - 1
    
    # Traverse through all the element and compare each element with pivot
    for j in range(low, high):
        
         # If current element is smaller than or equal to pivot
         if array[j] <= pivot:
             
             # increment the index of smaller element
             i += 1
             
             # swapping element at i with element at j
             array[i], array[j] = array[j], array[i]
             
    # swap the pivot element with the greater element specified by i
    array[i+1], array[high] = array[high], array[i+1]
    
    # return the position from where partition is done
    return i + 1

# Create a main function that implements quicksort    
def quick_sort(array, low, high):
    
    # Find pivot element such that element smaller than pivot are on the left element greater than pivot are on the right    
    if low < high:
        
        # pi is partitioning index, arr[pi] is now at right place
        pi = partition_pos(array, low, high)
        
        # recursive call on the left of pivot
        quick_sort(array, low, pi - 1)
        
        # recursive call on the right of pivot
        quick_sort(array, pi+1, high)
     
array = [1, 9, 45, 23, 12, 82, 67]
n = len(array)
quick_sort(array, 0, n-1)
print(array)
