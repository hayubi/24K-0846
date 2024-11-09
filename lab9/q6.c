/*6. Create a function that returns the maximum and minimum element in an integer array. Use this
function in the main program to find the maximum and minimum from an array entered by the
user.*/

#include <stdio.h>

void maxMin(int array[], int count);

int main()
{
    int array[50];
    int count, i;
    printf("how many numbers do you want to enter? ");
    scanf("%d", &count);

    printf("Enter values:\n");
    for(i=0; i<count; i++)
    {
        scanf("%d", &array[i]);
    }

    maxMin(array, count);
}

void maxMin(int array[], int count)
{
    int i;
    int max=array[0];
    int min=array[0];

    for(i=0; i<count; i++)
    {
        if (array[i] > max)
            {max = array[i];}
        else if (array[i] < min)
            {min = array[i];}
    }

    printf("Max value: %d\n", max);
    printf("Min value: %d\n", min);
}
