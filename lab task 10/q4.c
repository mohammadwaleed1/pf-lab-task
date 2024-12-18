#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char destination[50];
    int duration;      
    float cost;         
    int seatsAvailable;
} TravelPackage;

void displayPackages(TravelPackage packages[], int count) {
    printf("\nAvailable Travel Packages:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s to %s (%d days) - $%.2f, Seats: %d\n", 
               i + 1, packages[i].name, packages[i].destination, 
               packages[i].duration, packages[i].cost, packages[i].seatsAvailable);
    }
}

void bookPackage(TravelPackage packages[], int count) {
    int packageID;

    displayPackages(packages, count);

    printf("\nEnter the number of the package to book: ");
    scanf("%d", &packageID);

    if (packageID < 1 || packageID > count || packages[packageID - 1].seatsAvailable <= 0) {
        printf("Invalid choice or no seats available.\n");
        return;
    }

    packages[packageID - 1].seatsAvailable--;
    printf("Successfully booked 1 seat for '%s'.\n", packages[packageID - 1].name);
}
int main() {
    TravelPackage packages[] = {
        {"Beach Escape", "Maldives", 7, 1500.00, 5},
        {"Mountain Adventure", "Nepal", 5, 1200.00, 3},
        {"City Lights", "New York", 3, 900.00, 10}
    };
    int packageCount = 3;
    int choice;
    do {
        printf("\nTravel Package Booking System\n");
        printf("1. Display Available Packages\n");
        printf("2. Book a Package\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayPackages(packages, packageCount);
                break;
            case 2:
                bookPackage(packages, packageCount);
                break;
            case 3:
                printf("Exiting the system. Thank you!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
