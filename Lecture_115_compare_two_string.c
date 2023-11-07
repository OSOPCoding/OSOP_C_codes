#include <stdio.h>
#include <string.h>

// Function prototype for comparing two strings
int str_compare(char *, char *);

int main() {
    char str1[30], str2[30];
    int k;

    printf("Enter First string\n");
    gets(str1);

    printf("Enter Second string\n");
    gets(str2);

    // Call the str_compare function to compare the two strings
    k = str_compare(str1, str2);

    if (k == 1)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}

// Function to compare two strings
int str_compare(char *ptr1, char *ptr2) {
    int len1, len2, flag = 1;

    len1 = strlen(ptr1);
    len2 = strlen(ptr2);

    // Check if the lengths of both strings are equal
    if (len1 != len2)
        flag = 0;
    else {
        // Iterate through the strings to compare character by character
        while (*ptr1 != '\0' && flag == 1) {
            if (*ptr1 != *ptr2)
                flag = 0;
            ptr1++;
            ptr2++;
        }
    }

    return flag;
}
