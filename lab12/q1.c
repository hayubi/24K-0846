/*Task 1: Write a program that calculates the sum of all the elements in array using pointers
(Note: Generate the array via user)*/

#include <stdio.h>
int main()
{
    int count, sum=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &count);

    int array[count];
    printf("\nEnter elements of the array:\n");
    for (int i=0; i<count; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &array[i]);
    }

    int* ptr = array; //point to the first element of the array(0)
    for (int i=0; i<count; i++)
    {
        sum = sum + *(ptr + i);
    }
    printf("Sum = %d", sum);
}