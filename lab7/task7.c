/*7. Given an array arr[] of size N which contains elements from 0 to N-1, you need to
find one of the elements occurring more than once in the given array.
Input:
Array Size =5
Element 1=1
Element 2=2
Element 3=3
Element 4=2
Element 5=5
Output:
Number 2 occur more than once.
Note: You cannot utilize nested loops.*/

#include<stdio.h>
int main()
{
  int temp=0, num, index=0, x=0;
  printf("Enter the size of the array: ");
  scanf("%d", &num);
  int array[num];

  // Storing values in the array.
  for(int i=0 ; i<num ; i++)
     {printf("Enter the number to be stored on index %d: ", i);
      scanf("%d", &array[i]);}

  // The loop runs infinite times until a repeated number is found or the index variable equals the size of the array.
  for(;;)
     {
        if((array[index] == array[x+1]) && (index != x+1))
            {temp = array[index];
            break;}
        else
            {x++;}
        
        if(x >= num)
            {index++;
            x=0;}
        if(index == num)
            {break;}
     }
 
  // Printing the repeated number if any.
  if(temp != 0)
    {printf("Number %d occurs more than once", temp);}
  else
    {printf("No number occurs more than once in the array");}
  return 0;
}