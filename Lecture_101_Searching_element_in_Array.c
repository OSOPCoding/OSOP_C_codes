#include <stdio.h>

int main() {
    int A[10], i, n, found, item;

    // Prompt for the length of the array (up to 10 elements)
    printf("Enter length of Array (max = 10)\n");
    scanf("%d", &n);

    // Prompt for entering array elements
    printf("Enter elements in array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    // Prompt for the element to be searched
    printf("Enter the element to be searched\n");
    scanf("%d", &item);

    // Initialize 'found' to 0 for element not found
    found = 0;
    i = 0;

    // Search for the element in the array using a while loop
    while (i < n && found == 0) {
        if (A[i] == item) {
            found = 1;
            printf("Element found at index: %d", i + 1);
        }
        i++;
    }
    if (found == 0)
        printf("Element not found");

    return 0;
}
