/*2. Write a program to check whether a given number is prime or not.*/

#include <stdio.h>
int main()
{
int num, i, prime=1;
printf("enter a number");
scanf("%d", &num);
if (num <= 1)
	{prime = 0;}
else
	for (i=2; i<num; i++)
	{
		if (num % i == 0)
			{prime = 0;}
	}
if (prime == 1)
	{printf("prime number");}
else if (prime == 0)
	{printf("not a prime number");}
}