#include <stdio.h>

int main() {
    char name[30];  // Declare a character array for the name

    printf("Enter name\n");
    
    // Read the name from the user 
    gets(name);

    // Display the entered name
    printf("You entered %s", name);

    return 0;
}
