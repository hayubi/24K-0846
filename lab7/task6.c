/*Write a program to read 10 integers into an array. Then, use loops to find the
frequency of each element in the array (how many times each number occurs).*/

#include<stdio.h>
int main(){
    int array[10];
    int counter[1000]={0};
    int i,size=10;
    printf("Enter 10 numbers:\n");
    for(i=0;i<size;i++)
    {
        printf("Number %d: ",i+1);
        scanf("%d",&array[i]);
    }
    
    for(int i=0;i<size;i++)
        {counter[array[i]]++;}
    
    printf("\nElements Summary\n");
    for(i=0;i<size;i++)
    {
        if(counter[array[i]]>=1)
        {
            printf("Element %d comes %d times\n",array[i],counter[array[i]]);
            counter[array[i]]=0;
        }   
    }
}
