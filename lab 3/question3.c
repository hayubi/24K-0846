//QUESTION 3)
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
