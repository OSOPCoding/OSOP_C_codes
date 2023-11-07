#include <stdio.h>
#include <string.h>

// Function prototype for converting a string to lowercase
void str_lower(char *);

int main() {
    char str[30];

    printf("Enter any string\n");
    gets(str);

    // Call the str_lower function to convert the string to lowercase
    str_lower(str);

    // Display the lowercase string
    printf("Now lowercase string is %s", str);

    return 0;
}

// Function to convert a string to lowercase
void str_lower(char *ptr) {
    while (*ptr != '\0') {
        if (*ptr >= 'A' && *ptr <= 'Z')
            *ptr = *ptr + 32;
        ptr++;
    }
}
