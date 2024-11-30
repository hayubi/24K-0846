/*Task 2: Write a program to implement the exchange or swap the values of 3 variables{a,b,c}. To
implement this, you need to write a function called swaped().
void swaped(int *aPtr, int *bPtr, int *cPtr);
such that;
b ----> temp
a ----> b
c ----> a
temp -> a
*/

#include <stdio.h>
void swapped(int *aPtr, int *bPtr, int *cPtr);
int main()
{
    int a, b, c;
    printf("Enter three values to swap: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("\nBefore swapping:\na = %d \nb = %d \nc = %d\n", a, b, c);
    swapped(&a, &b, &c);
    printf("\nAfter swapping:\na = %d \nb = %d \nc = %d\n", a, b, c);
}

void swapped(int *aPtr, int *bPtr, int *cPtr)
{
    int temp;
    temp = *bPtr;
    *bPtr = *aPtr;
    *aPtr = *cPtr;
    *cPtr = temp;
}