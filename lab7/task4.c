/* Write a program that calculates the length of a string using a pointer. Do not use the built-in
strlen() or sizeof() function. After length calculation reverse the string using the same
pointers*/

#include <stdio.h>
int main ()
{
    char str[50];
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
    printf("length of string is %d\n", length);
    
    //reversing
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
    printf("reversed string: %s", str);
}



//q4
#include<stdio.h>
int main()
{
  int length=0;
  char str[100];
  printf("Enter a string: ");
  scanf("%s", str);
  char *ptr;

  // Using pointers to calculate the length of the string
  for( ptr=str ; *ptr != '\0' ; ptr++ )
     {length++;}
  printf("The length of the string entered is: %d", length);
  
  // Reversing the string using pointers
  // rev = str + length - 1 : means that the 'rev' pointer stores the address of the last index of 'str' array
  // ptr < rev ensures that 'ptr' pointer does not meet or cross the index 'rev' pointer
  char *rev, temp;
  for( ptr=str , rev=str + length - 1 ; ptr < rev ; ptr++ , rev-- )
     { temp = *ptr;
       *ptr = *rev;
       *rev = temp; }
  printf("\n Reversed String: %s", str);
}
