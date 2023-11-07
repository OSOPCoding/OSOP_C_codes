#include <stdio.h>
#include <conio.h> 

int main() {
    FILE *fptr = NULL;
    char ch, ans;

    // Open a file for writing ("w") with the given path.
    fptr = fopen("C:\\Test\\Test1.txt", "w");

    if (fptr == NULL) {
        printf("File is not created");
        return 1; // Exit the program with an error code.
    }

    printf("Enter different characters\n");
    
    do {
        ch = getche(); // Read a character from the user.
        fputc(ch, fptr); // Write the character to the file.
        printf("\nDo you want to continue\n");
        ans = getche(); // Read a single character from the user to determine if they want to continue.
    } while (ans == 'Y' || ans == 'y'); // Continue as long as the user enters 'Y' or 'y'.

    fclose(fptr); // Close the file.

    return 0;
}
