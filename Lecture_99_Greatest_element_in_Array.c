#include <stdio.h>

int main() {
    int A[10], n, i, max;

    // Prompt the user to enter the length of the array (up to a maximum of 10)
    printf("Enter length of Array (max = 10)\n");
    scanf("%d", &n);

    // Prompt the user to enter elements in the array
    printf("Enter elements in Array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    // Initialize 'max' to the first element of the array
    max = A[0];

    // Find the maximum element in the array
    for (i = 0; i < n; i++) {
        if (A[i] > max) {
            max = A[i];
        }
    }

    // Display the maximum element in the array
    printf("Maximum element is %d", max);

    return 0;
}
