/*5. Define a structure Date with fields day, month, and year. Create another structure Event
with fields event_name, date (nested Date structure), and location. Write a program to
display all event details in a readable format.*/

#include <stdio.h>
#include <string.h>

typedef struct 
{
    int day;
    int month;
    int year;
} Date;
typedef struct 
{
    char event_name[50];
    Date event_date;
    char location[50];
} Event;

int main()
{
    Event event1;
    printf("Enter name of the event: ");
    fgets(event1.event_name, sizeof(event1.event_name), stdin);
    event1.event_name[strcspn(event1.event_name, "\n")] = '\0';
    printf("Enter date of the event (dd-mm-yy): ");
    scanf("%d %d %d", &event1.event_date.day, &event1.event_date.month, &event1.event_date.year);
    getchar();
    printf("Enter location of the event: ");
    fgets(event1.location, sizeof(event1.location), stdin);
    event1.location[strcspn(event1.location, "\n")] = '\0';

    printf("\nDetails of the Event:\n");
    printf("Event Name: %s\n", event1.event_name);
    printf("Event Date: %d-%d-%d\n", event1.event_date.day, event1.event_date.month, event1.event_date.year);
    printf("Event Location: %s\n", event1.location);
}