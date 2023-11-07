#include <stdio.h>
#include <string.h>

int main() {
    char str[10][10], *ptr_array[10], *temp;
    int i, n, j;

    // Input the total number of strings (maximum is 10)
    printf("Enter total no of strings (max = 10)\n");
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

    // Sort the strings in lexicographical order
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(ptr_array[j], ptr_array[i]) < 0) {
                // Swap the pointers to achieve the sorting
                temp = ptr_array[j];
                ptr_array[j] = ptr_array[i];
                ptr_array[i] = temp;
            }
        }
    }

    // Display the sorted strings
    printf("Sorted strings are\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", ptr_array[i]);
    }

    return 0;
}
