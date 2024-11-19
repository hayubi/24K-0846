/*3. Create a program with a constant that defines the maximum allowable temperature (in
Celsius). Write a function to compare input temperatures and use a static variable to
count how many times temperatures exceeded the limit.*/

#include <stdio.h>

void tempcount(int temp);

int main()
{
    int temp;
    printf("enter temperature to compare (in Celsius): ");
    scanf("%d", &temp);
    tempcount(temp);
}

void tempcount(int temp)
{
    static int count = 0;
    const int maxtemp = 100;
    while (1)
    {
        if (temp > maxtemp)
            {
                count++;
                printf("enter temperature to compare (in Celsius): ");
                scanf("%d", &temp);
            }
        else if (temp <= maxtemp)
            {break;}
    }
    printf("The temperature has exceeded %d times", count);
    
}