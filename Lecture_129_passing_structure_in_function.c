#include <stdio.h>

// Define a structure to represent a Student
struct Student {
    int rollno;
    char name[30];
};

// Declare a function prototype to take a pointer to a Student structure as an argument
void test_fun(struct Student *ptr);

int main() {
    struct Student s1;

    // Input roll number and name for the student
    printf("Enter roll number\n");
    scanf("%d", &s1.rollno);
    printf("Enter name\n");
    scanf("%s", s1.name);

    // Call the test_fun function with a pointer to the Student structure
    test_fun(&s1);

    return 0;
}

// Define the test_fun function to display the student details
void test_fun(struct Student *ptr) {
    printf("roll number = %d\n", ptr->rollno);
    printf("name = %s\n", ptr->name);
}
