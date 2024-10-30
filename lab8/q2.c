/*2. Generate a pattern of odd/even numbers in a multi-dimension array of [2][n][2] where the first
2 is the different arrays for even and odd. The N is the amount of array quantity in each
odd/even array and the 2 are the two even/odd values in each of them, add them in decreasing
order starting from a user-specified number using nested loops.*/

#include <stdio.h>
int main()
{
    int n, i, startnum;
    printf("enter the number of pairs: ");
    scanf("%d", &n);
    printf("enter the starting number: ");
    scanf("%d", &startnum);

    int array[2][n][2];
    int oddcount=0, evencount=0;

    for (i=startnum; oddcount<n || evencount<n; i--)
    {
        if (i%2 == 0 && evencount<n)
        {
            array[0][evencount][0] = i;
            array[0][evencount][1] = i-2;
            evencount++;
        }
        else if (i%2 != 0 && oddcount<n)
        {
            array[1][oddcount][0] = i;
            array[1][oddcount][1] = i-2;
            oddcount++;
        }
    }

    printf("Even numbers:\n");
    for (i=0; i<n; i++)
        {printf("%d %d\n", array[0][i][0], array[0][i][1]);}

    printf("Odd numbers:\n");
    for (i=0; i<n; i++)
        {printf("%d %d\n", array[1][i][0], array[1][i][1]);}
}