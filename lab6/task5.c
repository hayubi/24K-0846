/*5.Make a pattern mentioned below using loops*/

#include <stdio.h>
int main()
{
int row, col, i;

for (col=0; col<4; col++)
{printf("* ");}

for (row=1; row<5; row++)
{printf("*       *\n");}

for (col=0; col<5; col++)
{printf("* ");}

}