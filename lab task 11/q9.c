#include <stdio.h>
#include <string.h>

typedef struct {
    int courseID;
    char courseName[50];
} Course;

typedef struct {
    int departmentID;
    char departmentName[50];
    Course course;
} Department;

// Function prototypes
void addDepartment();
void addCourse(int deptIndex);
void viewDepartments();

Department departments[5]; 
int numDepartments = 0;

int main() {
    int choice;
    do {
        printf("\nUniversity Management System\n");
        printf("1. Add Department\n");
        printf("2. Add Course\n");
        printf("3. View Departments\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addDepartment(); break;
            case 2: 
                if (numDepartments > 0) {
                    int deptIndex;
                    printf("Enter Department Index (0 to %d): ", numDepartments - 1);
                    scanf("%d", &deptIndex);
                    if (deptIndex >= 0 && deptIndex < numDepartments) {
                        addCourse(deptIndex);
                    } else {
                        printf("Invalid Department Index.\n");
                    }
                } else {
                    printf("No departments available.\n");
                }
                break;
            case 3: viewDepartments(); break;
            case 4: printf("Exiting.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}

void addDepartment() {
    if (numDepartments >= 5) {
        printf("Max departments reached.\n");
        return;
    }

    Department newDept;
    newDept.departmentID = numDepartments + 1;
    printf("Enter Department Name: ");
    getchar();  
    fgets(newDept.departmentName, 50, stdin);
    newDept.departmentName[strcspn(newDept.departmentName, "\n")] = 0;

    departments[numDepartments] = newDept;
    numDepartments++;
    printf("Department added successfully!\n");
}

void addCourse(int deptIndex) {
    Course newCourse;
    newCourse.courseID = 1;  
    printf("Enter Course Name: ");
    getchar(); 
    fgets(newCourse.courseName, 50, stdin);
    newCourse.courseName[strcspn(newCourse.courseName, "\n")] = 0; 

    departments[deptIndex].course = newCourse;
    printf("Course added to department!\n");
}


void viewDepartments() {
    if (numDepartments == 0) {
        printf("No departments available.\n");
        return;
    }

    printf("\nDepartments:\n");
    for (int i = 0; i < numDepartments; i++) {
        printf("Department ID: %d, Name: %s\n", departments[i].departmentID, departments[i].departmentName);
        printf("  Course: %s\n", departments[i].course.courseName);
    }
}
