#include <stdio.h>

int main() {
    int a, b, c, choice;

    // Prompt the user to enter the values of 'a' and 'b'
    printf("Enter the values of a, b:\n");
    scanf("%d %d", &a, &b);

    // Display the menu options to the user
    printf("*****menu******\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("***************\n");

    // Prompt the user to enter their choice
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Perform the corresponding operation based on the user's choice
    switch (choice) {
        case 1:
            c = a + b;
            printf("Addition: %d\n", c);
            break;

        case 2:
            c = a - b;
            printf("Subtraction: %d\n", c);
            break;

        case 3:
            c = a * b;
            printf("Multiplication: %d\n", c);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
