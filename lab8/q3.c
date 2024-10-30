/*3. Write a C program to find the saddle point(s) in each 3x3 matrix. A saddle point is an element
that is the smallest in its row and the largest in its column.*/

#include <stdio.h>
int main()
{
    int array[3][3];
    int i, j, k, smallest, largest, rowindex, colindex, isSaddle=1, saddlepoint;
    
    //taking inputs in the array
    printf("enter elements of the array: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Row %d Column %d : ", i+1, j+1);
            scanf("%d", &array[i][j]);
        }
    }

    //printing the array
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    //smallest in row 
    int currentelement;
    for(i=0; i<3; i++)
    {
        smallest=array[i][0];
        for (j=0; j<3; j++)
        {
            if (array[i][j] < smallest)
            {
                smallest = array[i][j];
                rowindex = i;
            }
        }
        printf("smallest in row %d: %d\n", i+1, smallest);
    }
    
    //largest in Column
    for(j=0; j<3; j++)    
    {
        largest=array[0][j];
        for(i=0; i<3; i++)
        {
            if (array[i][j] > largest)
            {
                largest = array[i][j];
                colindex = j;
            }
        }
        printf("largest in column %d: %d\n", j+1, largest);
    }

    for(i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            while (rowindex == colindex)
            {
                if (smallest != largest)
                    {isSaddle = 0;}
            }
        }
    }

    if (isSaddle == 1)
        {printf("Saddle Point: %d", smallest);}
    else
        {printf("No saddle point");}
}