/*1. Write a program to copy the contents of one file to another. (Create a File with some
dummy data, The data is not required to be formatted)*/

#include <stdio.h>
int main()
{
    FILE *fptr1, *fptr2;
    char text[100];

    fptr1 = fopen("file1.txt", "w");
    fprintf(fptr1, "Hello, my name is Hafsa Ayubi.");
    fclose(fptr1);

    fptr1= fopen("file1.txt", "r");
    if (fptr1 == NULL)
    {
        printf("Error! File does not exist.");
        return 1;
    }

    fptr2 = fopen("file1.txt", "w");
    while (fgets(text, sizeof(text), fptr1))
    {
        fprintf(fptr2, "%s", text);
    }

    fclose(fptr2);
    fclose(fptr1);
    printf("File contents copied successfully.\n");
}