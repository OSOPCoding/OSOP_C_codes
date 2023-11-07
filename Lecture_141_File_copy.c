#include <stdio.h>
#include <conio.h> // Note: 'conio.h' is not a standard C library. It might not be available on all systems.

int main() {
    FILE *fptr1, *fptr2;
    int code;
    char name[30];

    // Open the first file for reading ("r") with the given path.
    fptr1 = fopen("C:\\Test\\Test1.txt", "r");
    if (fptr1 == NULL) {
        printf("File not found");
        return 1; // Exit the program with an error code.
    }

    // Open the second file for writing ("w") with the given path.
    fptr2 = fopen("C:\\Test\\Test2.txt", "w");
    if (fptr2 == NULL) {
        printf("File is not created");
        return 1; // Exit the program with an error code.
    }

    while (!feof(fptr1)) {
        // Read an integer and a string from the first file and write to the second file.
        fscanf(fptr1, "%d%s", &code, name);
        fprintf(fptr2, "%d\t%s\n", code, name);
    }

    fclose(fptr1); // Close the first file.
    fclose(fptr2); // Close the second file.

    return 0;
}
