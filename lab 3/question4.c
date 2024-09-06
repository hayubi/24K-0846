//QUESTION#4) A car travelled back and forth from point A to point B. With a distance being (single trip) 1207KM. During
//the forward trip fuel price was 118/liter while returning it was 123/liter. Calculate the total fuel cost
//(both ways) and the fuel consumed (total trip). Use the car’s fuel average as input from the user (Input
//must be positive make some restrictions on only accepting positive input)

#include <stdio.h>
int main()
{
const int distance = 1207;
float fuelAvg, litrs, totalcost, totalfuel;
printf("enter the fuel average");
scanf ("%f", &fuelAvg);
if (fuelAvg > 0)
	{litrs = 1207/fuelAvg;
	totalcost = (litrs * 118) + (litrs * 123);
	totalfuel = litrs * 2;
	printf("total cost is %f", totalcost);
	printf("total fuel consumed is %f", totalfuel);}
else
	{printf ("invalid input. enter positive number");}
}