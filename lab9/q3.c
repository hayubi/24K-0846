/*3. Implement a function that checks if a given integer is a prime number. Use this function in the
main program to check if numbers entered by the user are prime.*/

#include <stdio.h>

void checkPrime(int num);

int main()
{
    int count, i, num;
    printf("Checking Prime Numbers:\nHow many numbers do you want to check? ");
    scanf("%d", &count);

    for(i=0; i<count; i++)
    {
        printf("\nenter number %d: ", i+1);
        scanf("%d", &num);
        checkPrime(num);
    }
}

void checkPrime(int num)
{
    int i, prime;

    if (num < 1)
        {prime=0;}
    else if (num == 1)
        {prime=0;}
    else
        prime=1;
        for(i=2; i<num; i++)
        {
            if (num%i == 0)
                {
                    prime=0;
                    break;
                }
        }
        if (prime == 0)
            {printf("%d is not a prime number\n", num);}
        else 
            {printf("%d is a prime number\n", num);}
}