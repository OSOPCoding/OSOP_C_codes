#include <stdio.h>
#include <string.h>

int main() {
    char str[10];
    int i, len, flag;

    // Input a string
    printf("Enter any string\n");
    gets(str);
    len = strlen(str);
    flag = 1;
    i = 0;

    // Check if the string is a palindrome
    while (i < len / 2 && flag == 1) {
        if (str[i] != str[len - (i + 1)]) {
            flag = 0;
        }
        i = i + 1;
    }

    // Display whether the string is a palindrome or not
    if (flag == 1) {
        printf("String is a palindrome\n");
    } else {
        printf("String is not a palindrome\n");
    }
    return 0;
}
