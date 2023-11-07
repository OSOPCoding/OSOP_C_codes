#include <stdio.h>
#include <string.h>

int main() {
    char str[30], temp;
    int i, len;

    printf("Enter any string\n");
    gets(str);

    // Calculate the length of the string using strlen
    len = strlen(str);

    // Reverse the string by swapping characters from the beginning and end
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - (i + 1)];
        str[len - (i + 1)] = temp;
    }

    // Display the reversed string
    printf("Reversed string is %s", str);

    return 0;
}
