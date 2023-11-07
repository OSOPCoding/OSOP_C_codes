#include <stdio.h>
#include <conio.h> // Note: 'conio.h' is not a standard C library. It might not be available on all systems.

int main() {
    FILE *fptr;
    char str[30];

    // Open a file for reading ("r") with the given path.
    fptr = fopen("C:\\Test\\Test1.txt", "r");

    if (fptr == NULL) {
        printf("File is not opened");
        return 1; // Exit the program with an error code.
    }

    while (!feof(fptr)) {
        // Read a line (up to 29 characters) from the file.
        fgets(str, sizeof(str), fptr);

        if (!feof(fptr)) {
            printf("%s\n", str); // Print the line to the console.
        }
    }

    fclose(fptr); // Close the file.

    return 0;
}
