#include <stdio.h>
#include <conio.h> 

int main() {
    FILE *fptr = NULL; // Declare a pointer to a FILE structure and initialize it to NULL.
    char ans, str[30];
    int n;

    // Open a file for writing ("w") with the given path.
    fptr = fopen("C:\\Test\\Test1.txt", "w");

    if (fptr == NULL) {
        printf("File is not created");
        return 1; // Exit the program with an error code.
    }

    do {
        printf("\nEnter Integer and string\n");
        scanf("%d%s", &n, str); // Read an integer and a string from the user.
        
        // Write the integer and string to the file.
        fprintf(fptr, "%d\t%s\n", n, str);
        
        printf("Do you want to continue press [y]\n");
        ans = getche(); // Read a single character from the user to determine if they want to continue.
    } while (ans == 'Y' || ans == 'y'); // Continue as long as the user enters 'Y' or 'y'.

    fclose(fptr); // Close the file.

    return 0;
}
