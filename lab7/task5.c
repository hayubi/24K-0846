/*Write a program which identifies if a given string is a palindrome using arrays.*/

#include <stdio.h>
int main()
{
    char str[100];
    printf("enter the string");
    scanf("%s", str);
    int i, length=0;
    int palindrome=0;

    //calculating length of string
    for (i=0; str[i] != '\0'; i++)
    {
        length++;
    }
    printf("length of string: %d\n", length);

    //Palindrome
    for(i=0; i<length; i++)
    {
        if (str[i] != str[length-1])
            {break;}
        else
            {palindrome=1;}
    }

    if (palindrome==1)
        {printf("Palindrome!");}
    else
        {printf("not a palindrome");}
}