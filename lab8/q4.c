/*4. Write a C program to multiply two matrices of size 3x3 and display the result matrix. Also
subtract the resultant matrix from Matrix A as well.*/

#include <stdio.h>
int main()
{
    int matrix1[3][3];
    int matrix2[3][3];
    int resultmatrix[3][3];
    int subtractedmatrix[3][3];
    int i, j, k;

    //taking inputs in matrix1
    printf("enter elements of 3x3 matrix1: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
        {
            printf("Row %d Column %d : ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }}
    //taking inputs in matrix2
    printf("enter elements of 3x3 matrix2: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
        {
            printf("Row %d Column %d : ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }}

    //printing matrix1
    printf("Matrix 1:\n");
    for(i=0; i<3; i++) 
    {
        for(j=0; j<3; j++)
            {printf("%d ", matrix1[i][j]);}
        printf("\n");
    }
    //printing matrix2
    printf("Matrix 2:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            {printf("%d ", matrix2[i][j]);}
        printf("\n");
    }


    //initialising resultmatrix to 0
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            {resultmatrix[i][j] = 0;}
    }
    //multiplying matrix1 & matrix2
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
                {resultmatrix[i][j] = resultmatrix[i][j] + (matrix1[i][k] * matrix2[k][j]);}
        }
    }
    //printing result matrix
    printf("Multiplied Matrix: \n");
    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            {printf("%d ", resultmatrix[i][j]);}
        printf("\n");
    }


    //initialising subtractedmatrix to 0
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            {subtractedmatrix[i][j] = 0;}
    }

    //subtracting resultmatrix from matrix1
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            {subtractedmatrix[i][j] = matrix1[i][j] - resultmatrix[i][j];}
    }

    //printing subtracted matrix
    printf("Subtracted Matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            {printf("%d ", resultmatrix[i][j]);}
    }
}


