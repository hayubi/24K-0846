/*Task 3:
Write a C Program to Find Largest Number in an array Using Dynamic Memory Allocation. Note:
The array must be dynamically resized and initially the array size will be taken by the user and
then resized by the user
Example arr[5]={1,2,3,4,5}
//After resizing
Arr[7]={1,2,3,4,5,6,7}
Take the same array and resize it.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, largest=0, newsize;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *array;
    array = (int*)malloc(n*sizeof(int));
    printf("Enter elements of the array: \n");
    for(int i=0; i<n; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d", &array[i]);
    }
    for(int i=0; i<n; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
    }
    printf("Largest number: %d\n", largest);

    printf("\nEnter new size of the array: ");
    scanf("%d", &newsize);
    array = (int*)realloc(array, newsize * sizeof(int));
    if (newsize > n)
    {
        printf("Enter new elements of the array: \n");
        for(int i=n; i<newsize; i++)
        {
            printf("Element %d: ",i+1);
            scanf("%d", &array[i]);
        }
    }
    for (int i=0; i<newsize; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
    }
    printf("Largest number after resizing: %d\n", largest);

    free(array);
}