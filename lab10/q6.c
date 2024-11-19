/*6. Design a structure to store information about travel packages, including package name,
destination, duration, cost, and number of seats available. Write a program that allows
users to book a travel package and display available packages.*/

#include <stdio.h>
#include <string.h>

typedef struct travelPackage
{
    char name[50];
    char destination[50];
    int duration;
    float cost;
    int numofseats;
} travelPackage;

void displayAll(travelPackage array[]);


int main()
{
    travelPackage array[5];
    strcpy(array[0].name, "Package One");
    strcpy(array[0].destination, "New York");
    array[0].duration = 30;
    array[0].cost = 500.00;
    array[0].numofseats = 30;

    strcpy(array[1].name, "Package Two");
    strcpy(array[1].destination, "Switzerland");
    array[1].duration = 10;
    array[1].cost = 200.00;
    array[1].numofseats = 5;

    strcpy(array[2].name, "Package Three");
    strcpy(array[2].destination, "Thailand");
    array[2].duration = 22;
    array[2].cost = 700.00;
    array[2].numofseats = 18;

    strcpy(array[3].name, "Package Four");
    strcpy(array[3].destination, "Turkey");
    array[3].duration = 17;
    array[3].cost = 350.00;
    array[3].numofseats = 1;

    strcpy(array[4].name, "Package Five");
    strcpy(array[4].destination, "Dubai");
    array[4].duration = 8;
    array[4].cost = 300.00;
    array[4].numofseats = 20;

    int choice, packagenum, seats;
    while(1)
    {
        printf("Enter your choice: \n1. Display all packages\n2. Book a package\n3. Exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: 
                displayAll(array);
                continue;
            case 2:
                displayAll(array);
                printf ("\nEnter package number you want to book: ");
                scanf("%d", &packagenum);
                printf ("Enter number of seats to book: ");
                scanf("%d", &seats);
                if(array[packagenum-1].numofseats >= seats)
                {
                    printf ("Your package is booked successfully.\n");
                    array[packagenum-1].numofseats = array[packagenum-1].numofseats - seats;
                }
                else 
                    {printf ("Seats not available.\n");}
                continue;
            case 3:
                printf ("Program ended.");
                break;
            default:
                printf ("Invalid choice");
                continue;
        }
        break;
    }
}

void displayAll(travelPackage array[])
{
    for (int i=0; i<5; i++)
    {
        if(array[i].numofseats > 0)
        {
            printf("\nPackage Number: %d\n", i+1);
            printf ("Package Name: %s\n", array[i].name);
            printf ("Package Destination: %s\n", array[i].destination);
            printf ("Package Duration (days): %d\n", array[i].duration);
            printf ("Package Cost: %f\n", array[i].cost);
            printf ("Seats Available: %d\n\n", array[i].numofseats);
        }
    }
}