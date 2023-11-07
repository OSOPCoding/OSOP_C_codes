#include <stdio.h>
#include <string.h>

// Function prototype for reversing a string
void str_reverse(char *);

int main() {
    char str[30];

    printf("Enter any string\n");
    gets(str);

    // Call the str_reverse function to reverse the string
    str_reverse(str);

    // Display the reversed string
    printf("Reversed string: %s", str);

    return 0;
}

// Function to reverse a string
void str_reverse(char *ptr) {
    int i, len;
    char temp;

    // Calculate the length of the string using strlen
    len = strlen(ptr);

    // Reverse the string by swapping characters from the beginning and end
    for (i = 0; i < len / 2; i++) {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + (len - (i + 1)));
        *(ptr + (len - (i + 1))) = temp;
    }
}
