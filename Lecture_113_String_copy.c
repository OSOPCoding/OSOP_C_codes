#include <stdio.h>
#include <string.h>

// Function prototype for copying one string to another
void str_copy(char *, char *);

int main() {
    char str1[30], str2[30];

    printf("Enter any string\n");
    gets(str1);

    // Call the str_copy function to copy str1 to str2
    str_copy(str1, str2);

    // Display the contents of str2
    printf("Now str2 = %s", str2);

    return 0;
}

// Function to copy one string to another
void str_copy(char *ptr1, char *ptr2) {
    while (*ptr1 != '\0') {
        *ptr2 = *ptr1;
        ptr1++;
        ptr2++;
    }
    *ptr2 = '\0';
}
