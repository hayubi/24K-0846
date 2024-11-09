/*5. Create a function that reverses a given string and returns the reversed string. Use this function
in the main program to display the reversed string entered by the user.*/

#include <stdio.h>
#include <string.h>

char* reverseString(char string[]);

int main()
{
    char string[50];
    char* reversed; //no brackets
    printf("enter a word to reverse: ");
    scanf("%s", string);
    reversed = reverseString(string);
    printf("Reversed String: %s", reversed);
}

char* reverseString(char string[])
{
    int i, length;
    char temp;
    static char reversed[50]; //static -> ensure that array persists after the function finishes executing

    length = strlen(string);
    strcpy(reversed, string);

    //reversing reverse array
    for(i=0; i<length/2; i++)
    {
        temp = reversed[i];
        reversed[i] = reversed[length-i-1];
        reversed[length-i-1] = temp;
    }
    reversed[length] = '\0'; //null terminate the reverse string

    return reversed;
}