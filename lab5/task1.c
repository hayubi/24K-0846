/*Task1: Write a program that asks for the number of calories and fat grams in a food.  The program
should display the percentage of calories that come from fat
One gram of fat has 9 calories, so Calories from fat = fat grams * 9
The percentage of calories from fat can be calculated as: calories from fat/total calories
Input validation: Make sure the number of calories and fat grams are not less than 0.
Also, the number of calories from fat cannot be greater than the total number of calories.  If that
happens, display an error message indicating that either the calories or fat grams were incorrectly
entered.*/

#include <stdio.h>
int main()
{
int calories, fat;
float CfromF, percentage;
printf("enter the calories in food");
scanf("%d", &calories);
printf("enter the fats in food");
scanf("%d", &fat);
if ((calories>0) && (fat>0))
	{
	CfromF = fat*9.0;
	if (CfromF > calories)
		{printf("either the calories or fat grams were incorrectly entered");}
	else
		{percentage = (CfromF/calories)*100.0;
		printf("percentage of calories that come from fat = %f", percentage);}
	}
else
	{printf("either the calories or fat grams were incorrectly entered");}
}

    
    
    