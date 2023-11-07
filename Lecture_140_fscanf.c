#include <stdio.h>
#include <conio.h> 

int main() {
    FILE *fptr;
    int code;
    char name[30];

    // Open a file for reading ("r") with the given path.
    fptr = fopen("C:\\Test\\Test1.txt", "r");

    if (fptr == NULL) {
        printf("File is not opened");
        return 1; // Exit the program with an error code.
    }

    while (!feof(fptr)) {
        // Read an integer and a string from the file.
        fscanf(fptr, "%d\t %s\n", &code, name);
        printf("%d\t%s\n", code, name); // Print the values to the console.
    }

    fclose(fptr); // Close the file.

    return 0;
}
