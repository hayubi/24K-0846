/*6. Define a structure Employee with fields name, id, salary, and a nested structure Address
(fields: city and zip_code). Write a program to input details for multiple employees,
store them in a file, and read them back to display.*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char city[20];
    char zip_code[50];
} Address;
typedef struct
{
    char name[50];
    int id; 
    float salary;
    Address address;
} Employee;

int main()
{
    FILE *fptr;
    int count;
    printf("How many employee details do you want to enter? ");
    scanf("%d", &count);
    getchar();

    Employee employee[count];
    for (int i=0; i<count; i++)
    {
        printf("\nEmployee %d:\n", i+1);
        printf("Enter name: ");
        fgets(employee[i].name, sizeof(employee->name), stdin);
        employee[i].name[strcspn(employee[i].name, "\n")] = '\0';
        printf("Enter ID: ");
        scanf("%d", &employee[i].id);
        printf("Enter salary: ");
        scanf("%f", &employee[i].salary);
        getchar();
        printf("Enter city: ");
        fgets(employee[i].address.city, sizeof(employee[i].address.city), stdin);
        employee[i].address.city[strcspn(employee[i].address.city, "\n")] = '\0';
        printf("Enter zip code: ");
        fgets(employee[i].address.zip_code, sizeof(employee[i].address.zip_code), stdin);
        employee[i].address.zip_code[strcspn(employee[i].address.zip_code, "\n")] = '\0';
    }

    fptr = fopen("employee.dat", "wb");
    if (fptr == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fwrite(employee, sizeof(Employee), count, fptr);
    fclose(fptr);

    fptr = fopen("employee.dat", "rb");
    if (fptr == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("Employee Details:\n");
    for (int i=0; i<count; i++)
    {
        fread(&employee[i], sizeof(Employee), 1, fptr);
        printf("\nEmployee %d:\n", i+1);
        printf("Name: %s\n", employee[i].name);
        printf("ID: %d\n", employee[i].id);
        printf("Salary: %f\n", employee[i].salary);
        printf("Address:\n");
        printf("City: %s\n", employee[i].address.city);
        printf("Zip Code: %s\n", employee[i].address.zip_code);
    }
    fclose(fptr);
}