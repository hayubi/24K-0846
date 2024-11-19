/*4. Define a Book structure with fields like title, author, publication_year, and price. Create
an array of books and write functions to:
1. Display all books in the library
2. Search for a book by title
3. List book by a specific author
*/

#include <stdio.h>
#include <string.h>

typedef struct Book
{
    char title[50];
    char author[50];
    int pYear;
    float price;
} book;

void displaybooks(book array[], int count);
void searchbook(book array[], int count, char titlesearch[]);
void specificAuthorBook(book array[], int count, char authorsearch[]);

int main()
{
    book array[50];
    int count, i;
    printf("Enter total books in the library: ");
    scanf("%d", &count);
    getchar();

    printf("\nEnter details:\n");
    for (i=0; i<count; i++)
    {
        printf("\nBook No %d:\n", i+1);
        printf("Title: "); fgets(array[i].title, sizeof(array[i].title), stdin);
        array[i].title[strcspn(array[i].title, "\n")] = '\0';

        printf("Author: "); fgets(array[i].author, sizeof(array[i].author), stdin);
        array[i].title[strcspn(array[i].title, "\n")] = '\0';

        printf("Publication Year: "); scanf("%d", &array[i].pYear);
        printf("Price: "); scanf("%f", &array[i].price);
        getchar();
    }

    int choice;
    char titlesearch[50], authorsearch[50];
    while(1)
    {
        printf("\nWhat would you like to choose? \n1. Display all books in the library \n2. Search for a book by title \n3. List book by a specific author \n4. Exit\n");
        scanf("%d", &choice);
        getchar();
        
        switch (choice)
        {
        case 1:
            displaybooks(array, count);
            continue;
        case 2:
            printf("Enter the title of the book you want to search: ");
            fgets(titlesearch, sizeof(titlesearch), stdin);
            searchbook(array, count, titlesearch);
            continue;
        case 3:
            printf("Enter the author name: ");
            fgets(authorsearch, sizeof(authorsearch), stdin);
            specificAuthorBook(array, count, authorsearch);
            continue;
        case 4:
            printf("Program ended.");
            break;
        default:
            printf("Invalid choice");
            continue;
        }
        break;
    }
}


void displaybooks(book array[], int count)
{
    printf("Book names: \n");
    for (int i=0; i<count; i++)
        {printf("%s\n", array[i].title);}
}


void searchbook(book array[], int count, char titlesearch[])
{
    titlesearch[strcspn(titlesearch, "\n")] = '\0';
    int flag=0;
    for (int i=0; i<count; i++)
    {
        if (strcmp(array[i].title, titlesearch) == 0)
            {
                flag=1;
                printf("Book found.\n");
                break;
            }
    }
    if (flag == 0) 
        {printf("Book not found.\n");}
}


void specificAuthorBook(book array[], int count, char authorsearch[])
{
    int flag=0;
    for (int i=0; i<count; i++)
    {
        if (strcmp(array[i].author, authorsearch) == 0)
            {
                printf("%s\n", array[i].title);
                flag = 1;
            }
    }
    if (flag == 0)
        {printf("Author not found.");}
        
}