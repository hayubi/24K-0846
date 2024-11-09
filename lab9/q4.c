/*4. Write a C program with a user-defined function calculate to perform basic arithmetic operations
such as addition, subtraction, multiplication, and division. The program should take two
numbers and an operation choice as input, and then use the function to perform the operation.*/

#include <stdio.h>

void calculation(int num1, int num2, char opr);

int main()
{
    int num1, num2;
    char opr;

    printf("enter first number: ");
    scanf("%d", &num1);
    printf("\nenter second number: ");
    scanf("%d", &num2);
    printf("\nenter arithmetic operator: ");
    scanf(" %c", &opr);
    calculation(num1, num2, opr);
}

void calculation(int num1, int num2, char opr)
{
    int result;
    switch (opr)
    {
    case '+' :
        result = num1 + num2;
        printf("\nResult: %d", result);
        break;
    
    case '-' :
        result = num1 - num2;
        printf("\nResult: %d", result);
        break;

    case '*' :
        result = num1 * num2;
        printf("\nResult: %d", result);
        break;

    case '/' :
        result = num1 / num2;
        printf("\nResult: %d", result);
        break;

    default:
        printf("\ninvalid operator");
    }
}