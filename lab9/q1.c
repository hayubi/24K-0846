/*1. Create a program that accepts a 2D array of strings (e.g., 5 words with a max length of 20
characters each). Determines if each word (row) is a palindrome. Outputs “Palindrome” or “Not
Palindrome” for each word. A palindrome is a word that reads the same forward and backward.
For example: &quot;madam&quot;, &quot;racecar&quot;, &quot;level&quot;, &quot;radar&quot;.*/

#include <stdio.h>
#include <string.h>
int main()
{
    char array[50][50];
    int i, j, length, palindrome, numofwords;

    //inputting words in array
    printf("how many words do you want to enter? ");
    scanf("%d", &numofwords);
    
    for(i=0; i<numofwords; i++)
    {
        printf("\nenter word %d : ", i+1);
        scanf("%s", array[i]);
        length = strlen(array[i]);
        palindrome=1;
        for(j=0; j<length/2; j++)
        {
            if (array[i][j] != array[i][length - j - 1])
                {
                    palindrome=0;
                    break;
                }
        }
        if (palindrome==0)
            {printf("Not palindrome");}
        else
            {printf("Palindrome!");}
    }
}