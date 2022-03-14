def bubble_sort(array):
    # Find length of array
    n = len(array)

    # Outer loop
    for i in range(n-1):

        # Inner loop
        for j in range(n-1):

            # check element if element is greater than next, it gets swapped
            if array[j] > array[j+1]:

                #Swapping
                array[j], array[j+1] = array[j+1], array[j]

                
array = [8, 9, 6, 54, 2, 81, 8]

# Call Function
bubble_sort(array)

print(array)
