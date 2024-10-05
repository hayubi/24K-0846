/*
5.Make a pattern mentioned below using loops
* * * * *
*       *
*       *
*       *
*       *
* * * * *
*/

#include <stdio.h>
int main()
{
int i;
for (i=1; i<=6; i++)
{
	if ((i==1) || (i==6))
		{printf("* * * * *\n");}
	else
		{printf("*       *\n");}
}
}
