/*Create a function to replace a word in a file with another word.
Read the file into memory, perform a search and replace, and write the modified
content back to the file.*/

#include <stdio.h>
#include <string.h>
int main()
{
    char wordtoSearch[50], newWord[50], eachword[50]; 
    char allWords[500][500];
    int i=0;
    printf("Enter word to search: ");
    scanf("%s", wordtoSearch);
    printf ("Enter new word: ");
    scanf("%s", newWord);
    
    FILE *fptr = fopen("Sample.txt", "r");
    if (fptr == NULL)
    {
        printf ("Error opening file in reading.");
        return;
    }
    
    while(fscanf(fptr, "%s", eachword) != EOF)
    {
        if(strcmp(eachword, wordtoSearch) == 0)
        {
            strcpy(allWords[i], newWord);
            i++;
        }
        else
        {
            strcpy(allWords[i], eachword);
            i++;
        }
    }
    fclose(fptr);
    
    fptr = fopen("Sample.txt","w");
    if (fptr == NULL)
    {
        printf ("Error opening file in writing.");
        return;
    }
    
    for(int j=0; j<=i; j++)
    {
        fprintf(fptr, "%s", allWords[j]);
        if (j < i-1)
            fprintf(fptr, " ");
    }
    fclose(fptr);
}