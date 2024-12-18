#include <stdio.h>
#include <string.h>

typedef struct {
    int bookID;
    char title[50];
    char author[50];
    int quantity;
    float price;
} Book;

void addBook();
void viewBooks();
void searchBook();

int main() {
    int choice;
    do {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. View All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addBook(); break;
            case 2: viewBooks(); break;
            case 3: searchBook(); break;
            case 4: printf("Exiting.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}

void addBook() {
    FILE *file = fopen("books.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    Book newBook;
    printf("\nEnter Book ID: ");
    scanf("%d", &newBook.bookID);
    printf("Enter Title: ");
    getchar();  
    fgets(newBook.title, 50, stdin);
    newBook.title[strcspn(newBook.title, "\n")] = 0; 

    printf("Enter Author: ");
    fgets(newBook.author, 50, stdin);
    newBook.author[strcspn(newBook.author, "\n")] = 0;

    printf("Enter Quantity: ");
    scanf("%d", &newBook.quantity);
    printf("Enter Price: ");
    scanf("%f", &newBook.price);

    fwrite(&newBook, sizeof(Book), 1, file);
    printf("Book added successfully!\n");
    fclose(file);
}

void viewBooks() {
    FILE *file = fopen("books.txt", "r");
    if (file == NULL) {
        printf("No records found!\n");
        return;
    }

    Book book;
    printf("\nID\tTitle\t\tAuthor\t\tQuantity\tPrice\n");
    while (fread(&book, sizeof(Book), 1, file)) {
        printf("%d\t%s\t%s\t%d\t\t%.2f\n", book.bookID, book.title, book.author, book.quantity, book.price);
    }
    fclose(file);
}

void searchBook() {
    FILE *file = fopen("books.txt", "r");
    if (file == NULL) {
        printf("No records found!\n");
        return;
    }

    int searchID;
    printf("Enter Book ID to search: ");
    scanf("%d", &searchID);

    Book book;
    int found = 0;
    while (fread(&book, sizeof(Book), 1, file)) {
        if (book.bookID == searchID) {
            printf("Book found: %d\t%s\t%s\t%d\t%.2f\n", book.bookID, book.title, book.author, book.quantity, book.price);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book not found.\n");
    }
    fclose(file);
}
