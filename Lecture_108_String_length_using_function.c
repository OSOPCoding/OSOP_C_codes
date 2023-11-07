#include <stdio.h>

int main() {
    int str_length(char *);
    char str[30];
    int length;

    printf("Enter any String\n");
    gets(str);

    // Call the str_length function to calculate the length of the string
    length = str_length(str);

    // Display the length of the string
    printf("Length of string is %d", length);

    return 0;
}

int str_length(char *ptr) {
    int len = 0;

    // Iterate through the string until the null terminator '\0' is encountered
    while (*ptr != '\0') {
        len++;
        ptr++;
    }

    return len;
}
