/*Write a program that calculates the length of a string using a pointer. Do not use the
built-in strlen() or sizeof() function. After length calculation reverse the string using
the same pointers*/

#include <stdio.h>
int main()
{
    char strarray[100];
    printf("enter the string: ");
    scanf("%s", strarray);
    char *startptr,*reverse , temp;
    int length=0;

    //calculating length USING POINTERS
    for (startptr=strarray; *startptr != '\0'; startptr++)
        {length++;}
    printf("Length of the string: %d\n", length);

    //REVERSING string using pointers
    for (startptr=strarray, reverse = startptr + length - 1; startptr < reverse; startptr++, reverse--)
    {
        temp=*startptr;
        *startptr=*reverse;
        *reverse=temp;
    }
    printf("Reversed String: %s", strarray);
}