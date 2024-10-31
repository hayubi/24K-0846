/*2. Create a C program that swaps the values of two integers using a user-defined function,
swapIntegers. The user inputs two integer values, and the program uses the function to swap
them. It should perform the swap and display the updated values.*/

#include <stdio.h>

void swapfunction(int a, int b);

int main()
{
    int num1, num2, result;
    printf("enter number 1: ");
    scanf("%d", &num1);
    printf("enter number 2: ");
    scanf("%d", &num2);

    swapfunction(num1, num2);
    printf("num 1: %d\n", num1);
    printf("num 2: %d", num2);
}

void swapfunction(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}