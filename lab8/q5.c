/*5. Write a C program to generate a diamond shape pattern using nested loops. The program
should take the number of rows for the upper half of the diamond as input from the user.
   *
  * *
 * * * 
* * * *
 * * *
  * *
   *
*/

#include <stdio.h>
int main()
{
    int i, j, k, rows;

    printf("enter the number of rows for the upper half of the diamond: ");
    scanf("%d", &rows);

    /* upper half
       *
      * *
     * * * 
    * * * *
    */
    for(i=0; i<rows; i++)
    {
        for(j=i; j<rows; j++)
            {printf(" ");}
        for(k=0; k<i; k++)
            {printf("* ");}
        printf("\n");
    }
    
    /* lower half
    * * *
     * *
      *
    */
    for(i=rows; i>0; i--)
    {
        for(j=rows; j>i; j--)
            {printf(" ");}
        for(k=0; k<i; k++)
            {printf("* ");}
        printf("\n");
    }
}