//Question#6) Construct a C program where you calculate the slope of two point (5,4), (3,2). Use format specifiers to cap the result to 3 decimal places.

#include <stdio.h>
int main()
{
int point1x;
int point1y;
int point2x;
int point2y;
float slope;
printf ("enter x coordinate of point 1");
scanf ("%d", &point1x);
printf ("enter y coordinate of point 1");
scanf ("%d", &point1y);
printf ("enter x coordinate of point 2");
scanf ("%d", &point2x);
printf ("enter y coordinate of point 2");
scanf ("%d", &point2y);
slope = ((point2y-point1y)/(point2x-point1x));
printf ("slope = %f", slope);
}