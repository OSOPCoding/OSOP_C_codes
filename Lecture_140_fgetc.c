#include <stdio.h>
#include <conio.h> 

int main() {
    FILE *fptr;
    char ch;

    // Open a file for reading ("r") with the given path.
    fptr = fopen("C:\\Test\\Test1.txt", "r");

    if (fptr == NULL) {
        printf("File is not opened");
        return 1; // Exit the program with an error code.
    }

    while (!feof(fptr)) {
        ch = getc(fptr); // Read a character from the file.
        if (!feof(fptr)) {
            printf("%c", ch); // Print the character to the console.
        }
    }

    fclose(fptr); // Close the file.

    return 0;
}
