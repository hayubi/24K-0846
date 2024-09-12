/*Write a C program to input a character from the user and check whether the
given character is a small alphabet, capital alphabet, digit, or special character,
using if else.*/

#include <stdio.h>
int main()
{
char character;
printf("enter a character");
scanf("%c", &character);
if ((character>='A') && (character<='Z'))
	{printf("Capital letter");}
else if ((character>='a') && (character<='z'))
	{printf("Small letter");}
else if ((character>='0') && (character<='9'))
	{printf("Digit");}
else
	{printf("special character");}
}