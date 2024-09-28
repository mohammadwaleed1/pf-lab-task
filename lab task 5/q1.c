#include <stdio.h>
int main() {
int age;
int ct;
printf("Enter your age: ");
scanf("%d", &age);
age >= 18 ? printf("You can vote.\n") : printf("You cannot vote.\n");
return 0;
}
