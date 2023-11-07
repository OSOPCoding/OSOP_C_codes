#include <stdio.h>

// Define a structure to represent an address
struct Address {
    int hno;
    char street[30];
    char city[30];
};

// Define a structure to represent a student, which includes an address
struct Student {
    int rollno;
    char name[30];
    struct Address ad;
};

int main() {
    struct Student s1;

    // Input details for the student, including their address
    printf("Enter details of the student\n");
    printf("Enter roll number\n");
    scanf("%d", &s1.rollno);
    printf("Enter name\n");
    scanf("%s", s1.name);
    printf("Enter home number\n");
    scanf("%d", &s1.ad.hno);
    printf("Enter street\n");
    scanf("%s", s1.ad.street);
    printf("Enter city\n");
    scanf("%s", s1.ad.city);

    // Display the student's details, including their address
    printf("Student details:\n");
    printf("Roll number = %d\n", s1.rollno);
    printf("Name = %s\n", s1.name);
    printf("Address = %d, %s, %s\n", s1.ad.hno, s1.ad.street, s1.ad.city);

    return 0;
}
