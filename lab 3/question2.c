//QUESTION#2)
#include <stdio.h>
int main()
{
int num1;
int num2;
int temp;
printf ("enter first number");
scanf("%d",&num1);
printf ("enter second number");
scanf("%d",&num2);
temp = num1;
num1 = num2;
num2 = temp;
printf("num1 = %d",num1);
printf("num2 = %d" ,num2);
return 0;
}