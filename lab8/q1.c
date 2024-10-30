/*1. Write a C program that generates a sequence of prime numbers within a given range using
nested loops.*/

#include <stdio.h>
int main() 
{
    int i, j, upperbound, lowerbound;
    int foundPrime = 0; // to check if there are any prime numbers in the range


    printf("To print a range of prime numbers:\nEnter the lower bound: ");
    scanf("%d", &lowerbound);
    printf("Enter the upper bound: ");
    scanf("%d", &upperbound);

    for (i = lowerbound; i <= upperbound; i++) 
    {
        int prime = 1; // assuming the number is prime (at the start of loop)
        if (i < 2) 
            {prime = 0;} 
        else 
        {
            for (j=2; j*j <= i; j++) 
            {
                if (i%j == 0) 
                {
                    prime = 0; 
                    break; // no need to check further
                }
            }
        }

        if (prime == 1) 
        {
            printf("%d ", i);
            foundPrime = 1; // We found at least ONE prime number
        }
    }

    if (foundPrime == 0) 
        {printf("No prime numbers in this range.");}
}
