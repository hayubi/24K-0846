/* 3. Using the above program integrate the number if it is a prime and print the Fibonacci series till that
number.
Example
Input: 5 Output:
Number is prime
Series is = 0 1 1 2 3 */

#include <stdio.h>
int main () 
{
int num, i, prime=1, temp=1, num1=0, num2=1;
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
{
    printf("prime number\n");
	if (num == 1)
		{printf("Series : 0");}
	else if (num == 2)
		{printf (" Series : 0 1");}
	else 
	{
		printf ("Series : 0 1 ");
		for (i=2; i<num; i++)
		{
			printf ("%d ", temp);
			num1 = num2;
			num2 = temp;
			temp = num1 + num2; 
		}
	}
}
else if (prime == 0)
	{printf("not a prime number");}
}