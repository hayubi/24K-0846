/*3. Implement a function that checks if a given integer is a prime number. Use this function in the
main program to check if numbers entered by the user are prime.*/

#include <stdio.h>
int prime(int num);
int main()
{
    int numbers[100];
    int i, num, result;
    printf("how many numbers do you want to enter?");
    scanf("%d", &num);
    for (i=0; i<num; i++)
    {
        printf("enter number %d : ", i+1);
        scanf("%d", &numbers[i]);
        result = prime(numbers[i]);
    }

    if (result==1)
        {printf("prime");}
    else
        {printf("not prime");}
}

int prime(int num)
{
    int isprime=1, i, j;

    if (num<=1)
        {isprime=0;}
    else
    {
        for(j=2; j<i; j++)
        if(j%2 == 0)
        {
            isprime=0;
            break;
        }
    }
    return isprime;

}