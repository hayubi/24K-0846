/*7. Define a structure Company with fields name, year_established, and an array
departments containing the names of up to 5 departments. Write a program to display
company details including all departments.*/

#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[50];
    int year_established;
    char departments[5][50];
} Company;

int main()
{
    Company company;
    printf("Enter name of the company: ");
    fgets(company.name, sizeof(company.name), stdin);
    company.name[strcspn(company.name, "\n")] = '\0';
    printf("Enter the year in which it was established: ");
    scanf("%d", &company.year_established);
    getchar();
    printf("Enter the 5 department names:\n");
    for (int i=0; i<5; i++)
    {
        printf("%d: ", i+1);
        fgets(company.departments[i], sizeof(company.departments[i]), stdin);
        company.departments[i][strcspn(company.departments[i], "\n")] = '\0';
    }

    printf("\nCompany Details: \n");
    printf("Name: %s\n", company.name);
    printf("Year Established: %d\n", company.year_established);
    printf("Department Names:\n");
    for (int i=0; i<5; i++)
    {
        printf("%d: %s\n", i+1, company.departments[i]);
    }
}