/*Task5:
Implement the following decision table using nested ternary operators.
Assume that the grade point average is within the range 0.0 through 4.0.*/

#include <stdio.h>
int main()
{
float GPA;
printf("enter GPA");
scanf("%f", &GPA);
(GPA > 0.0 && GPA < 0.99) ?
	printf("Failed semester-registration suspended")
: (GPA > 1.0 && GPA < 1.99) ?
	printf("on probation for next semester")
: (GPA > 2.0 && GPA < 2.99) ?
	printf(" ")
: (GPA > 3.0 && GPA < 3.49) ?
	printf("Dean's list for semester")
:printf("highest honors for semester");;;;;
}
