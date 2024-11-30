/*Task 4:
Write a program that ask the user to enter the total 'N' no of characters in user's name {First
Name + Last Name} to create a dynamic array of characters. After create a dynamic array of
that 'N' no of characters using malloc or calloc function. Finally copy your full name in it that has
already been taken from the user before.
Dynamic Array = "Muhib Ahmed"
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int N;
    char *array;
    char name[50];

    printf("Enter the total number of characters in your full name: ");
    scanf("%d", &N);
    getchar();
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    array = (char*)malloc((N+1)*sizeof(char));
    strcpy(array, name);
    printf("Name stored in dynamic array: %s\n", array);
    free(array);
}