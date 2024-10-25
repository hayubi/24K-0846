/*8. You are required to design a calculator utilizing an array. Take a string from the user i.e.
20+10-30 and store it in an array. Traverse through the array, if there are values stored
them in some variable and if an operation comes perform the necessary operation and if
a null character comes display the result. If the null character comes after the operator,
the program should print an invalid expression. (Note: Only do this for + and - operator)*/

#include <stdio.h>

int main() 
{
    char strarray[50];
    printf("Enter an expression: ");
    scanf("%s", strarray);

    int result=0, currentNum=0;
    char operator='+'; // Start with addition to initialize
    int i=0;

    while (strarray[i] != '\0') 
    {
        if (strarray[i] >= '0' && strarray[i] <= '9') 
        {
         currentNum = (currentNum * 10) + (strarray[i] - '0');
        } 
        else if (strarray[i] == '+' || strarray[i] == '-') 
        {
            // Perform the previous operation
            if (operator == '+') 
                {result = result + currentNum;} 
            else if (operator == '-') 
                {result = result - currentNum;}
            
            operator = strarray[i];
            currentNum = 0;
        } 
        else 
        {
            printf("Invalid character: %c\n", strarray[i]);
            return 1;
        }
        i++;
    }

    // Perform the last operation
    if (operator == '+') {
        result = result + currentNum;
    } else if (operator == '-') {
        result = result - currentNum;
    }

    printf("Result: %d\n", result);
    return 0;
}