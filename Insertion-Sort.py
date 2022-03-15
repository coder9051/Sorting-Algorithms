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
