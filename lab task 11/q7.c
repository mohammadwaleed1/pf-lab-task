#include <stdio.h>
#include <string.h>

typedef struct {
    char courseID[10];
    char courseName[50];
    int credits;
} Course;

typedef struct {
    char departmentName[50];
    Course courses[5];  // Assuming a department can have a maximum of 5 courses
    int numCourses;
} Department;

int main() {
    Department departments[3];  // Assuming a maximum of 3 departments
    int numDepartments = 0;

    // Adding a department
    strcpy(departments[numDepartments].departmentName, "Computer Science");
    departments[numDepartments].numCourses = 2;
    strcpy(departments[numDepartments].courses[0].courseID, "CS101");
    strcpy(departments[numDepartments].courses[0].courseName, "Intro to Programming");
    departments[numDepartments].courses[0].credits = 3;
    strcpy(departments[numDepartments].courses[1].courseID, "CS102");
    strcpy(departments[numDepartments].courses[1].courseName, "Data Structures");
    departments[numDepartments].courses[1].credits = 4;
    numDepartments++;

    // Display department and course details
    for (int i = 0; i < numDepartments; i++) {
        printf("\nDepartment: %s\n", departments[i].departmentName);
        int totalCredits = 0;
        for (int j = 0; j < departments[i].numCourses; j++) {
            printf("Course ID: %s\n", departments[i].courses[j].courseID);
            printf("Course Name: %s\n", departments[i].courses[j].courseName);
            printf("Credits: %d\n", departments[i].courses[j].credits);
            totalCredits += departments[i].courses[j].credits;
        }
        printf("Total Credits for Department: %d\n", totalCredits);
    }

    return 0;
}
