/*Create a calculator asking for operator (+ or – or * or /) and operands and
performs calculation according to the user input using switch statement.*/

#include <stdio.h>
int main()
{
int num1, num2, result;
char operator;
printf("enter the operator");
scanf("%c", &operator);
printf("enter the two numbers");
scanf("%d", &num1);
scanf("%d", &num2);
switch (operator)
	{
	case '+': 
	result = num1 + num2;
	break;
	case '-':
	result = num1 - num2;
	break;
	case '*':
	result = num1*num2;
	break;
	case '/':
	result = num1/num2;
	break;
	default:
	printf("invalid operator");
	}
printf("result = %d", result);
}
