/*6. Print a pattern using nested loops
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/

#include <stdio.h>
int main()
{
    int i, j, k, rows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    for(i=0; i<rows; i++)
    {
        int value = 1;
        for(j=0; j< rows-i-1; j++)
            {printf(" ");}

        for(j=0; j<=i; j++)
        {
            printf("%d ", value);
            value = value * (i-j) / (j+1);
        }
        printf("\n");
    }
}