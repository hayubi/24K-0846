/*2. Write a program that takes a string as input from the user and counts the frequency
of each vowel (A, E, I, O, U) in the string*/

#include <stdio.h>
int main()
{
    char array[100];
    int i, countA=0, countE=0, countI=0, countO=0, countU=0;
    printf("enter a string");
    scanf("%s", array);
    for (i=0; array[i] != '\0'; i++)
        {
            char letter = array[i];
            switch(letter)
            {
                case 'A':
                case 'a':
                countA++;
                break;
                
                case 'E':
                case 'e':
                countE++;
                break;
                
                case 'I':
                case 'i':
                countI++;
                break;
                
                case 'O':
                case 'o':
                countO++;
                break;
                
                case 'U':
                case 'u':
                countU++;
                break;
            }
        }
        printf("A: %d\n", countA);
        printf("E: %d\n", countE);
        printf("I: %d\n", countI);
        printf("O: %d\n", countO);
        printf("U: %d\n", countU);
}
