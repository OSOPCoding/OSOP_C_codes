#include <stdio.h>
#include <string.h>

// Define a structure to represent an Employee
struct Employee {
    int code;
    char name[20];
};

int main() {
    struct Employee e1, e2;

    // Input details for the first employee
    printf("Enter code of the first employee\n");
    scanf("%d", &e1.code);
    printf("Enter name of the first employee\n");
    scanf("%s", e1.name);

    // Input details for the second employee
    printf("Enter code of the second employee\n");
    scanf("%d", &e2.code);
    printf("Enter name of the second employee\n");
    scanf("%s", e2.name);

    // Display details of the first employee
    printf("First employee\n");
    printf("code = %d\n", e1.code);
    printf("name = %s\n", e1.name);

    // Display details of the second employee
    printf("Second employee\n");
    printf("code = %d\n", e2.code);
    printf("name = %s\n", e2.name);

    return 0;
}
