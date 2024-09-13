/*Write a program in C to calculate and print the Electricity bill of a given
customer. The customer id., name and unit consumed by the user should be
taken from the keyboard and display the total amount to pay to the customer.
The charges are as follow:

Unit Charge/Unit
Up to 199 @16.20
200 and above but less than 300 @20.10
300 and above but less than 500 @27.10
500 and above @35.90
If the bill exceeds Rs. 18000 then a surcharge of 15% will be charged on top of the bill.

Basic Decision Structures Programming Fundamentals Lab

Lab 03 Page 14 of 3
Test Input:
1001 //Customer ID
James //Customer Name
800 //Units Consumed

Expected Output:
Customer ID :1001
Customer Name: James
Units Consumed :800
Amount Charges @Rs. 35.90 per unit: 28720
Surcharge Amount: 4308
Net Amount Paid by the Customer: 33028.00*/



#include <stdio.h>
int main()
{
int ID, units;
char name[50];
float amount, surchargeAmt, netAmt
printf("enter customer ID");
scanf("%d", &ID);
printf("enter customer name");
scanf("%s", name);
printf("enter the units consumed");
scanf("%d", &units);
if (units < 199)
	{amount = 16.20*units;}
else if ((units >= 200) && (units < 300))
	{amount = 20.10*units;}
else if ((units >= 300) && (units < 500))
	{amount = 27.10*units;}
else if (units >= 500)
	{amount = 35.90*units;}
else
	{printf("insufficient units");}

if (amount > 18000)
	{
	surchargeAmt = 0.15*amount;
	netAmt = amount + surchargeAmt;}
printf("Customer ID : %d", ID);
printf("Customer Name : %s",name);
printf("Units Consumed : %d", units);





	
