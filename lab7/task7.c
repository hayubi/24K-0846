/*7. Given an array arr[] of size N which contains elements from 0 to N-1, you need to
find one of the elements occurring more than once in the given array.
Input:
Array Size =5
Element 1=1
Element 2=2
Element 3=3
Element 4=2
Element 5=5
Output:
Number 2 occur more than once.
Note: You cannot utilize nested loops.*/

#include <stdio.h>
int main()
{
    int arr[100];
    int frequency[1000];
    int size, i, morethanonce=-1;

    //entering elements into the array 'arr'
    printf("enter the size of the array");
    scanf("%d", &size);
    for(i=0; i<size; i++)
    {
        printf("Element %d = ", i+1);
        scanf("%d", &arr[i]);
    }

    //initialising 'frequency' array to 0
    for(i=0; i<size; i++)
        {frequency[i] = 0;}
    
    //counting frequency of each element
    for(i=0; i<size; i++)
        {frequency[arr[i]] = frequency[arr[i]] + 1;}
    
    //checking if any number occurs more than once
    for(i=0; i<size; i++)
    {
        if (frequency[arr[i]] > 1)
        {
            morethanonce = arr[i];
            break; //bcz we have to find only one number that occurs more than once
        }
    }

    if (morethanonce != -1)
        {printf("Number %d occurs more than once", morethanonce);}
    else
        {printf("No number occurs more than once in the array");}

}