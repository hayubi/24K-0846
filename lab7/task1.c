/*1. Create a program that takes an array of size 6 and shifts all its elements to the right
by one position. The last element should move to the first position.
Input: {1,2,3,4,5,6}
Output: {6,1,2,3,4,5}*/

#include <stdio.h>
int main()
{
	int array[6];
	int i, temp;
	for (i=0; i<6; i++)
	{
		printf("enter array values");
		scanf("%d", &array[i]);
	}
	
	printf("Original Array: {");
	for (i=0; i<6; i++)
	    {printf("%d", array[i]);}
	printf("}");

    temp = array[5];
    for (i=4; i>=0; i--)
    {
        array[i+1] = array[i];
    }
    array[0] = temp;
    
    printf("\nReversed: {");
	for (i=0; i<6; i++)
	    {printf("%d", array[i]);}
	printf("}");
}