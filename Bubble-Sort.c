#include <stdio.h>

void bubbleSort(int n, int array[])
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i -1; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printArray(int array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ",array[i]);
}

int main()
{
    int a[] = {5, 3, 9, 2, 8};
    int size = 5;
    bubbleSort(size, a);
    printArray(a, size);
}
