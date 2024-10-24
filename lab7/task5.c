/*Write a program which identifies if a given string is a palindrome using arrays.*/

#include <stdio.h>
int main ()
{
    char userIn[50], str[50];
    printf ("enter a short string\n");
    scanf("%s", str);
    char *endptr = &str[0], *startptr = &str[0];
    
    int length=0, i=0;
    while (str[i] != '\0')
    {
        length ++;
        endptr++;
        i++;
    }
    
    //storing original string in a new variable
    for(i=0; i<length; i++)
    {
        userIn[i] = str[i];
    }
    
    
    //reversing the original string 
    char temp;  
    endptr--;
    while(startptr < endptr)
    {
        temp = *startptr;
        *startptr = *endptr;
        *endptr = temp;
        startptr++;
        endptr--;
    }
    
    //comparing original and reversed string 
    int flag =1;
    for(i=0; i<length; i++)
    {
        if(userIn[i] != str[i])
            flag = 0;
    }
    if (flag == 0)
        printf ("it is not a palindrome");
    else 
        printf ("it is a palindrome");
}



//q5
#include<stdio.h>
int main()
{
  char str[100];
  int palindrome = 1, length=0;
  printf("Enter a string: ");
  scanf("%s", str);

  // To find out the length of the string, we need to see when the '\0' terminator appears in the string
  for(int i=0 ; str[i] != '\0' ; i++)
     {length++;}

  // Checking for palindrome
  for(int i=0 ; i<length ; i++)
     {if(str[i] != str[length-1-i])
        {palindrome = 0;} 
         break;}

  // Printing if string is palindrome or not
  if(palindrome == 1)
    {printf("The string entered is a palindrome.");}
  else if(palindrome == 0)
    {printf("The string entered is not a palindrome.");}
  return 0;
}
