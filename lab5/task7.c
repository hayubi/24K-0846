/*Task7:
Using Ternary operators write a C-Program that can identify if the last digit of the
number is zero or non-zero. If its zero, the program should print “Last Digit is zero” if it’s
non-zero the program should print “Last Digit non-zero”
Example:
Input 5; Output: Last Digit Non-Zero
Input 20; Output: Last Digit Zero*/

#include <stdio.h>
int main()
{
int num;
printf("enter the number");
scanf("%d", &num);
(num%10 == 0) ? printf("Last Digit is zero")
: printf("Last Digit Non-Zero");
}
