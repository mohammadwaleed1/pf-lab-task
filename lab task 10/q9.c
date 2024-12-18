#include <stdio.h>

typedef struct {
    int employeeID;
    char name[50];
    char department[50];
    float salary;
} Employee;

int main() {
    int numEmployees;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &employees[i].employeeID);

        printf("Name: ");
        scanf(" %[^\n]", employees[i].name); 

        printf("Department: ");
        scanf(" %[^\n]", employees[i].department);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].employeeID);
        printf("Name: %s\n", employees[i].name);
        printf("Department: %s\n", employees[i].department);
        printf("Salary: $%.2f\n", employees[i].salary);
    }

    return 0;
}
