/*1. Write a recursive function that takes an array and its size as input and prints all the
elements.*/
#include <stdio.h>

void recursive(int array[], int size);

int main()
{
    int size, array[100];

    printf("how many elements do you want to enter in the array? ");
    scanf("%d", &size);
    for (int i=0; i<size; i++)
    {
        printf("enter number %d: ", i+1);
        scanf("%d", &array[i]);
    }

    recursive(array, size-1);
}


void recursive(int array[], int size)
{
    if (size == -1)
        {return;}
    recursive(array, size-1);
    printf("%d\t", array[size]);
}