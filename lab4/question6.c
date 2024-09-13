/*An online shopping store is providing discounts on the items due to the Eid. If
the cost of items is less than 2000 it will give a discount up to 5%. If the cost of
shopping is 2000 to 4000, a 10% discount will be applied. If the cost of
shopping is 4000 to 6000, a 20% discount will be applied. If it is more than 6000
then a 35% discount will be applied to the cost of shopping. Print the actual
amount, saved amount and the amount after discount. The Minimum amount
eligible for a discount is 500.*/

#include <stdio.h>
int main()
{
int actualAmt;
float savedAmt, afterDsct;
printf("enter cost of items");
scanf("%d", actualAmt);
if (actualAmt>=500)
	{
	if (actualAmt<2000)
		{savedAmt = 0.05*actualAmt;
		afterDsct = actualAmt - savedAmt;}
	else if ((actualAmt>=2000) && (actualAmt<4000))
		{savedAmt = 0.1*actualAmt;
		afterDsct = actualAmt - savedAmt;}
	else if ((actualAmt>=4000) && (actualAmt<6000))
		{savedAmt = 0.2*actualAmt;
		afterDsct = actualAmt - savedAmt;}
	else if (actualAmt>=6000)
		{savedAmt = 0.35*actualAmt;
		afterDsct = actualAmt - savedAmt;}
	}
else
	{printf("no discount");}
printf("Actual Amount = %d", actualAmt);
printf("Saved Amount = %f", savedAmt);
printf("Amount after Discount = %f", afterDsct);
}