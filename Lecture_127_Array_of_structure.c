#include <stdio.h>

// Define a structure to represent an Employee
struct Employee {
    int code;
    char name[30];
};

int main() {
    struct Employee e[10];

    // Input information for employees
    printf("Enter the information of employees\n");
    for (int i = 0; i < 3; i++) {
        printf("Employee No %d\n", i + 1);
        printf("Enter code\n");
        scanf("%d", &e[i].code);
        printf("Enter name\n");
        scanf("%s", e[i].name);
    }

    // Display information of employees
    printf("Employees are\n");
    for (int i = 0; i < 3; i++) {
        printf("Employee No %d\n", i + 1);
        printf("Code = %d  and Name = %s\n", e[i].code, e[i].name);
    }

    return 0;
}
