#include <stdio.h>
#include <string.h>

int main() {
    char str[30];
    int i, num, n;

    printf("Enter any string\n");
    gets(str);

    i = 0;    // Initialize index 'i'
    num = 0;  // Initialize 'num' to zero

    // Convert a string of digits to an integer
    while (str[i] != '\0') {
        n = str[i] - '0'; // Convert character to its integer value
        num = num * 10 + n;
        i = i + 1;
    }

    // Display the converted number
    printf("Number is %d", num);

    return 0;
}
