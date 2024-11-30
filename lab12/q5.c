/*Task 5:
Using Task. 4, resize that dynamic array of character and append the array with your studentId.
That student id must be taken input from the user.
DynamicArray = "Muhib Ahmed" // Before
DynamicArray = "K241234 Muhib Ahmed" // After the text append
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
    printf("\nEnter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    array = (char*)malloc((N+1)*sizeof(char));
    strcpy(array, name);
    printf("Name stored in dynamic array: %s\n", array);
    
    char stdID[10];
    printf("\nEnter studentID: ");
    fgets(stdID, sizeof(stdID), stdin);
    stdID[strcspn(stdID, "\n")] = '\0';

    array = (char*)realloc(array, (N + strlen(stdID) + 2)*sizeof(char));
    strcpy(array, stdID);
    strcat(array, " ");
    strcat(array, name);
    printf("Name and ID stored in dynamic array: %s\n", array);
    free(array);
}