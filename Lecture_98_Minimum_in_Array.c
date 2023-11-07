#include <stdio.h>

int main() {
    int A[10], n, i, min;

    // Prompt the user to enter the length of the array (up to a maximum of 10)
    printf("Enter length of Array (max = 10)\n");
    scanf("%d", &n);

    // Prompt the user to enter elements in the array
    printf("Enter elements in Array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    // Initialize 'min' to the first element of the array
    min = A[0];

    // Find the minimum element in the array
    for (i = 0; i < n; i++) {
        if (A[i] < min) {
            min = A[i];
        }
    }

    // Display the minimum element in the array
    printf("Minimum element is %d", min);

    return 0;
}
