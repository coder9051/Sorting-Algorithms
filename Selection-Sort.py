# Create a function
def selection_sort(array):
    
    # Traverse through all the elements of array
    for i in range(len(array)):
        
        # Set current element as minmum
        minimum_index = i
        
        # Check the element to be minimum
        for j in range(i+1, len(array)):
            if array[minimum_index] > array[j]:
                minimum_index = j
                
             # Swap the found minimum value with the compared value
            array[i], array[minimum_index] = array[minimum_index], array[i]
    
array = [1, 9, 45, 23, 12, 82, 67]
selection_sort(array)
print(array)
