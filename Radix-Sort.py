# Create Function for Counting sort
def counting_sort(array):

  size = len(array)

  # Create a list of size of array which will be the sorted list
  sorted_array = [0]*size

  # Create a count array of size of maximum of array to store count of individual numbers and initialize count array as 0
  count = [0]*(max(array)+1)

  # Store the count of each elements in count array
  for i in range(size):
    count[array[i]] += 1

  # Store the cummulative count
  # count[i] now contains the number of elements equal to i i.e. actual position of this character in output array
  for i in range(1, len(count)):
    count[i] += count[i-1]

  # Find the index of each element of the original array in count array place the elements in output array
  i = size - 1
  while i >= 0:
    sorted_array[count[array[i]] - 1] = array[i]
    count[array[i]] -= 1
    i -= 1
  # Copy the sorted elements into original array
  for i in range(size):
    array[i] = sorted_array[i]

# Main function to implement radix sort
def radix_sort(array):

  # Find the maximum number to know number of digits
  max_number = max(array)
  
  # Do counting sort for every digit. Note that instead of passing digit number, place is passed. place is 10^i where i is current digit number
  place = 1
  while max_number // place > 0:
    counting_sort(array, place)
    place *= 10

array = [18, 3, 41, 12, 9, 2, 56]
counting_sort(array)
print(array)
