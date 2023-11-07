#include <stdio.h>
#include <string.h>

// Define a structure to represent an Employee
struct Employee {
    int code;
    char name[20];
};

int main() {
    struct Employee e1;

    // Declare a pointer to an Employee structure
    struct Employee *ptr;

    // Input details for the first employee
    printf("Enter code of the first employee\n");
    scanf("%d", &e1.code);
    printf("Enter name of the first employee\n");
    scanf("%s", e1.name);

    // Assign the address of e1 to the pointer
    ptr = &e1;

    // Display the details using the pointer
    printf("code = %d\n", ptr->code);
    printf("name = %s\n", ptr->name);

    return 0;
}
