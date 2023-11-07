#include <stdio.h>

int main() {
    char str[10][10], *ptr_array[10], *ptr;
    int i, len, n;

    // Input the total number of strings (maximum is 10)
    printf("Enter total no. of strings (max = 10)\n");
    scanf("%d", &n);
    // Consume the newline character left in the input buffer
    getchar();

    // Input different strings
    printf("Enter different strings\n");
    for (i = 0; i < n; i++) {
        gets(str[i]);
        // Store pointers to each string in ptr_array
        ptr_array[i] = str[i];
    }

    // Calculate and print the length of each string
    for (i = 0; i < n; i++) {
        ptr = ptr_array[i];
        len = 0;
        while (*ptr != '\0') {
            len++;
            ptr++;
        }
        printf("Length of %s is %d\n", ptr_array[i], len);
    }

    return 0;
}
