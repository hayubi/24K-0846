/*2. How would you implement a program to count the occurrences of each word in a text
file? Write the approach and code.*/

#include <stdio.h>
#include <string.h>

typedef struct 
{
    char word[20];
    int count;
} WordCount;

int main() 
{
    FILE *fptr = fopen("text.txt", "r");
    if (fptr == NULL) 
    {
        printf("File not found");
        return 1;
    }
    
    char currentWord[20];
    WordCount wordCounts[100];
    int wordIndex = 0;
    for (int i = 0; i < 100; i++) 
    {
        wordCounts[i].count = 0;
    }

    while (fscanf(fptr, "%s", currentWord) != EOF) 
    {
        int found = 0;
        for (int i = 0; i < wordIndex; i++) 
        {
            if (strcmp(wordCounts[i].word, currentWord) == 0) 
            {
                wordCounts[i].count++;
                found = 1;
                break;
            }
        }

        if (found == 0 && wordIndex < 100) 
        {
            strcpy(wordCounts[wordIndex].word, currentWord); 
            wordCounts[wordIndex].count = 1;
            wordIndex++;
        }
    }
    fclose(fptr);

    printf("WORD COUNTS\n");
    for (int i = 0; i < wordIndex; i++) 
    {
        printf("%s: %d\n", wordCounts[i].word, wordCounts[i].count);
    }
}
