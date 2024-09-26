/*Task3:
Write a program to control a coffee machine. Allow the user to input the type of coffee as B for Black
and W for White. Ask the user if the cup size is double and if the coffee is manual. The following table
details the time chart for the machine for each coffee type. Display a statement for each step. If the
coffee size is double, increase the baking time by 50 percent. Use functions to display instructions to the
user and to compute the coffee time.*/

#include <stdio.h> 
int main() 
{ 
char coffeetype, size, manual; 
int pw, sugar, mw1, ac, am, mw2, time; 
time = 0;gcc task3.c

float increase, totalbakingtime; 
printf("enter the coffee type; 'B' for black, 'W' for white"); 
scanf("%c", &coffeetype); 
printf("is it manual? Y for yes, N for no");
scanf(" %c", &manual);
printf("is it double? Y for yes, N for no");
scanf(" %c", &size);
switch (coffeetype)
{
case 'W':
case 'w':
	pw = 15;
	sugar = 15;
	mw1 = 20;
	ac = 2;
	am = 4;
	mw2 = 20;
	printf("put water = 15 mins\n"); time = time + pw;
	printf("sugar = 15 mins\n"); time = time + sugar;
	if (manual == 'Y' || manual =='y')
		{
		printf("mix well = 20 mins\n");
		time = time + mw1;
		}
	printf("add coffee = 2 mins\n"); time = time + ac;
	printf("add milk = 4 mins\n"); time = time + am;
	if (manual == 'Y' || manual =='y')
		{
		printf("mix well = 20 mins\n");
		time = time + mw2;
		}
	break;
case 'B':
case 'b':
	pw = 20;
	sugar = 20;
	mw1 = 25;
	ac = 15;
	am = 40;
	mw2 = 25;
	printf("put water = 20 mins\n"); time = time + pw;
	printf("put water = 20 mins\n"); time = time + sugar;
	if (manual == 'Y' || manual =='y')
		{
		printf("mix well = 25 mins\n");
		time = time + mw1;
		}
	printf("put water = 15 mins\n"); time = time + ac;
	printf("put water = 40 mins\n"); time = time + am;
	if (manual == 'Y' || manual =='y')
		{
		printf("mix well = 20 mins\n");
		time = time + mw2;
		}
	break;
}

if (size == 'Y' || size == 'y')
	{
	increase = time*0.5;
	totalbakingtime = time + increase;
	printf("Total Time = %f", totalbakingtime);
	}
else
	{printf("Total Time = %d", time);}
}
