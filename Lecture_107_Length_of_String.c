#include <stdio.h>

int main() {
    char str[30];  // Declare a character array to store the string
    int length;   
    printf("Enter any string\n");

    // Read the string from the user 
    gets(str);

    length = 0;

    // Calculate the length of the string by counting characters until the null terminator '\0' is encountered
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of String is %d", length);

    return 0;
}
