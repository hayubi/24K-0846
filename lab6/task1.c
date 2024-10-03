/*1. Which loop system would be better for user input. Justify your answer by creating a program that
takes a value and adds it to a variable and prints it repeatedly until the user enters a zero value.

while loop system as we want sum all the numbers until the user inputs (indefinite inputs)*/

#include <stdio.h>
int main()
{
int num, sum=0;
while (num != 0)
{
	printf("enter a number\n");
	scanf("%d", &num);
	sum = sum + num;
	printf("sum = %d\n", sum);
}
}
