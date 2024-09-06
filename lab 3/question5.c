//QUESTION#5) Construct a C program with the flowchart below. The input value of the principle must be between 100
//Rs. To 1,000,000 Rs. The Rate of interest must be between 5% to 10% and Time Period must be between
//1 to 10 years. Hint: these restrictions can be displayed in the form of message on the window.

#include <stdio.h>
int main()
{
float Principle; 
float RateOfInterest;
int TimePeriod;
float SimpleInterest;
printf ("enter principle value");
scanf ("%f", &Principle);
printf ("enter rate of interest. It must be between 5 percent to 10 percent");
scanf ("%f", &RateOfInterest);
if (RateOfInterest > 0.05 && RateOfInterest < 0.1)
	{
	printf ("enter time period. It must be between 1 to 10 years.");
	scanf ("%d", &TimePeriod);
	if (TimePeriod > 1 && TimePeriod < 10)
		{SimpleInterest = ((Principle * RateOfInterest * TimePeriod)/100);}
	else 
		{printf ("invalid time period");}
	}
else
	{printf("invalid Rate of Interest");}
printf ("Simple Interest = %f", SimpleInterest);
}
	

