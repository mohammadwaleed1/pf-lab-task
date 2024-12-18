#include <stdio.h>

typedef struct {
    int employeeID;
    char name[50];
    float salary;
} Employee;

int main() {
    Employee employees[100];
    int count = 0, choice;

    do {
        printf("\n1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count < 100) {
                printf("Enter Employee ID: ");
                scanf("%d", &employees[count].employeeID);
                printf("Enter Name: ");
                scanf(" %[^\n]", employees[count].name);
                printf("Enter Salary: ");
                scanf("%f", &employees[count].salary);
                count++;
                printf("Employee added successfully!\n");
            } else {
                printf("Employee limit reached.\n");
            }
        } else if (choice == 2) {
            if (count == 0) {
                printf("No employees to display.\n");
            } else {
                for (int i = 0; i < count; i++) {
                    printf("ID: %d, Name: %s, Salary: %.2f\n",
                           employees[i].employeeID, employees[i].name, employees[i].salary);
                }
            }
        } else if (choice != 3) {
            printf("Invalid choice. Try again.\n");
        }
    } while (choice != 3);

    printf("Goodbye!\n");
    return 0;
}
