/*4. Create a program that defines a structure Student with fields roll_no, name, and
another nested structure Marks (fields: maths, science, and english). Use an array of
Student to store data for 5 students and calculate the average marks for each student.*/

#include <stdio.h>
#include <string.h>

typedef struct Marks
{
    int maths;
    int science;
    int english;
} marks;

typedef struct Student
{
    int roll_no;
    char name[20];
    marks stdMarks;
} student;

int main()
{
    float average;
    student array[5];
    printf("Enter details: \n");
    for (int i=0; i<5; i++)
    {
        printf("\nStudent %d:\n", i+1);
        printf("Enter roll number: ");
        scanf("%d", &array[i].roll_no);
        printf("Enter your name: ");
        getchar();
        fgets(array[i].name, sizeof(array[i].name), stdin);
        array[i].name[strcspn(array[i].name, "\n")] = '\0';
    
        printf("Enter marks of Maths: ");
        scanf("%d", &array[i].stdMarks.maths);
        printf("Enter marks for Science: ");
        scanf("%d", &array[i].stdMarks.science);
        printf("Enter marks for English: ");
        scanf("%d", &array[i].stdMarks.english);

        average = (array[i].stdMarks.maths + array[i].stdMarks.science + array[i].stdMarks.english)/3;
        printf("\nAverage Marks: %.2f\n", average);
    }
}