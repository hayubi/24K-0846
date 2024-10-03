/*4. Write a program to check whether a number is an Armstrong number or not. An Armstrong number is
a number that is equal to the sum of cubes of its digits.*/

#include <stdio.h>
int main()
{
int num, sum=0, digit, cube;
printf("enter a number");
scanf("%d", &num);
while (num != 0)
{
	digit = num%10;
	cube = digit^3;
	num = num/10;
}
sum = sum + cube;
if (sum == num)
	{printf("Armstrong number");}
else
	{printf("not an Armstrong number");}
}