/*Write a C program which asks the user for an input (any number) and only
accepts numbers that are (positive, multiple of 2 and divisible by 10). Any
other number should be discarded (Write the condition in a single statement
no nesting)*/

#include <stdio.h>
int main()
{
int num;
printf("enter a number");
scanf("%d", &num);
if ((num>=0) && (num%2 == 0) && (num%10 == 0))
	{printf("Valid number");}
else
	{printf("Invalid number");}
}