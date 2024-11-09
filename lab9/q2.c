/*2. Create a C program that swaps the values of two integers using a user-defined function,
swapIntegers. The user inputs two integer values, and the program uses the function to swap
them. It should perform the swap and display the updated values.*/

#include <stdio.h>

void swapIntegers(int num1, int num2);

int main()
{
    int num1, num2;

    printf("enter first number: ");
    scanf("%d", &num1);
    printf("enter second number: ");
    scanf("%d", &num2);
    swapIntegers(num1, num2);
}

void swapIntegers(int num1, int num2)
{
    printf("\nOriginal Values: \nNumber 1: %d \nNumber 2: %d \n", num1, num2);

    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nReversed Values: \nNumber 1: %d \nNumber 2: %d \n", num1, num2);
}