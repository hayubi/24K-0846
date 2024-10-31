/*1. Create a program that accepts a 2D array of strings (e.g., 5 words with a max length of 20
characters each). Determines if each word (row) is a palindrome. Outputs “Palindrome” or “Not
Palindrome” for each word. A palindrome is a word that reads the same forward and backward.
For example: &quot;madam&quot;, &quot;racecar&quot;, &quot;level&quot;, &quot;radar&quot;.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char array[50][5];
    char input[50];
    int i, j, numofwords, length;
    
    printf("how many words do you want to enter? ");
    scanf("%d", &numofwords);

    //inputting and checking length of word
    for(i=0; i<numofwords; i++)
    {
        printf("enter the word for row %d : ", i+1);
        scanf("%s", array[i]);
        printf("%s", array[i]);
        if (strlen(array[i]) <= 20)
            {
                length=strlen(array[i]);
                continue;
            }
        else
            {
                printf("Maximum Length(20) exceeded");
                break;
            }
    }

    // Checking if each word is a palindrome
    for (i = 0; i < numofwords; i++) {
        int palindrome = 1;
        int length = strlen(array[i]);
        for (j = 0; j < length / 2; j++) {
            if (array[i][j] != array[i][length - j - 1]) {
                palindrome = 0;
                break; // No need to check further
            }
        }
        if (palindrome) {
            printf("Row %d: Palindrome\n", i + 1);
        } else {
            printf("Row %d: Not a palindrome\n", i + 1);
        }
    }
}