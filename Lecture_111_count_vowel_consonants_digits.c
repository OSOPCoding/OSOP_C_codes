#include <stdio.h>
#include <string.h>

int main() {
    char str[30], ch;
    int vow = 0, cons = 0, digits = 0, i = 0;

    printf("Enter any string\n");
    gets(str);

    // Convert the string to uppercase using strupr
    strupr(str);

    // Loop through the string character by character
    while (str[i] != '\0') {
        ch = str[i];

        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vow++;  // Check for vowels
        else {
            if (ch >= 'A' && ch <= 'Z')
                cons++;  // Check for consonants
            else {
                if (ch >= '0' && ch <= '9')
                    digits++;  // Check for digits
            }
        }
        i++;
    }

    // Display the counts of vowels, consonants, and digits
    printf("Total vowels = %d\n", vow);
    printf("Total consonants = %d\n", cons);
    printf("Total digits = %d\n", digits);

    return 0;
}
