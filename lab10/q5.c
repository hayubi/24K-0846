/*5. Write a recursive function bubbleSort that takes an array and its size. It performs the
bubble sort algorithm by repeatedly comparing adjacent elements and swapping them if
they are in the wrong order.*/

#include <stdio.h>

void recursive_bubblesort(int array[], int count);

int main()
{
    int count, array[50];
    printf("enter the size of the array: ");
    scanf("%d", &count);
    printf("enter array elements: \n");
    for (int i=0; i<count; i++)
        {scanf("%d", &array[i]);}

    printf("Before Sorting: ");
    for(int i=0; i<count; i++)
    {
        printf("%d\t", array[i]);
    }

    recursive_bubblesort(array, count);
    
    printf("\nAfter Sorting: ");
    for(int i=0; i<count; i++)
    {
        printf("%d\t", array[i]);
    }
}


void recursive_bubblesort(int array[], int count)
{
    if (count == 0)
    {
        return;
    }

    for (int i=0; i < count - 1; i++)
    {
        if (array[i] > array[i+1])
        {
            int temp = array[i];
            array[i] = array[i+1];
            array[i+1] = temp;
        }
    }
    recursive_bubblesort(array, count-1);
}