/*8. Write a recursive function linearSearch that takes an array, its size, the target element
to search for, and the current index. It checks if the target is at the current index and continues searching in the subsequent indices until it either finds the target or exhausts
the array.*/

#include <stdio.h>

void recursiveLinearSearch(int array[], int count, int target, int index);

int main()
{
    int count, array[50], target;
    printf("Enter the size of the array: ");
    scanf("%d", &count);
    printf("Enter elements of the array: \n");
    for (int i=0; i<count; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the element to search in the array: ");
    scanf("%d", &target);

    recursiveLinearSearch(array, count, target, 0);
}


void recursiveLinearSearch(int array[], int count, int target, int index)
{
    if (count == index)
        {
            printf("%d is not found in the array.", target);
            return;
        }
    
    if (array[index] == target) 
        {printf("%d is found in the array at position %d.", target, index+1);}
    else
        {recursiveLinearSearch(array, count, target, index+1);}
}