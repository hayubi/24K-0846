/*Write a program to read 10 integers into an array. Then, use loops to find the
frequency of each element in the array (how many times each number occurs).*/

#include <stdio.h>
int main()
{
    int array[10];
    int frequency[100];
    int i;

    //reading integres in the array
    for(i=0; i<10; i++)
    {
        printf("enter number for index %d: ", i);
        scanf("%d", &array[i]);
    }

    //initialising frequency array to 0
    for(i=0; i<10; i++)
        {frequency[i]=0;}
    
    //counting frequency of each elemnt in the array
    for(i=0; i<10; i++)
        {frequency[array[i]] = frequency[array[i]] + 1;}
    
    for(i=0; i<10; i++)
    {
        if (frequency[array[i]] >= 1)
        {
            printf("\nNumber %d comes %d times.", array[i], frequency[array[i]]);
            frequency[array[i]] = 0;
        }
    }
}