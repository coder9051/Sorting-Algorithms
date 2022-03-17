# Create merge function for implementation of mergesort
def merge_sort(array):
     if len(array) > 1:
         
         #  r is the point where the array is divided into two subarrays
         r = len(array)//2
         
         # first subarray
         L = array[:r]
         
         # second subarray
         R = array[r:]
         
         # Sort the two halves
         merge_sort(L)
         merge_sort(R)
         
         # Initial index of first subarray
         i = 0

         # Initial index of second subarray
         j = 0

         # Initial index of merged subarray
         k = 0
         
        # When we run out of elements in either L or R, pick up the remaining elements and put in A[p..r] 
         while i < len(L) and j < len(R):
            if L[i] < R[j]:
                array[k] = L[i]
                i += 1
                
            else:
                array[k] = R[j]
                j += 1
                
            k += 1
            
        # When we run out of elements in either L or R
        # Copy the remaining elements of L[], if there are any
         while i < len(L):
            array[k] = L[i]
            i += 1
            k += 1
            
         # Copy the remaining elements of L[], if there are any
         while j < len(R):
             array[k] = R[j]
             j += 1
             k += 1
             
def print_array(array):
    n = len(array)
    for i in range(n): 
        print(array[i], end=" ") 
    print() 
     
array = [1, 9, 45, 23, 12, 82, 67]
merge_sort(array)
print_array(array)
