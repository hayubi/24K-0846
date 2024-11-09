/*7. Create a Function where it accepts a 2D array of strings where it sorts the string in the array
based on the first character’s ASCII Value in ascending order.
Example: {HELLO,JELLO,MELLO,TELLO,BELLO} //Input to function
Output from Function: {BELLO,HELLO,JELLO,MELLO,TELLO}
Hint: You can use the strcpy function for this to copy the array.*/

#include <stdio.h>
#include <string.h>

void sort(char array[50][50], int count);

int main()
{
    char array[50][50];
    int i, j, count;

    printf("how many words do you want to sort? ");
    scanf("%d", &count);
    printf("\nenter strings:\n");
    for (i=0; i<count; i++)
    {
        scanf("%s", array[i]);
    }

    sort(array, count);
}

void sort(char array[50][50], int count)
{
    int i, j;
    char temp[50];

    for (i=0; i<count; i++)
    {
        for (j=i+1; j<count; j++)
        {
            if (array[i][0] > array[j][0])
            {
                strcpy(temp, array[i]);
                strcpy(array[i], array[j]);
                strcpy(array[j], temp);
            }
        }
    }

    printf("After sorting:\n");
    for (i=0; i<count; i++)
        {printf("%s\n", array[i]);}
}