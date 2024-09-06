//QUESTION#3) A customer asks the IT firm to develop a program in C language, which can take tax rate and salary from the user on runtime and then calculate the tax, the user has to pay and the salary he/she will have after paying the tax. This information is then provided to the user. 

#include <stdio.h>
int main()
{
float taxrate;
float salary;
printf("enter the tax rate");
scanf ("%f",&taxrate);
printf ("enter the salary");
scanf ("%f",&salary);
salary = salary - (salary * (taxrate/100));
printf ("your salary after tax is = %f", salary);
}