#include <stdio.h>

int main() {
    int A[10], i, n, j, temp;

    // Prompt for the length of the array (up to 10 elements)
    printf("Enter length of Array (max = 10)\n");
    scanf("%d", &n);

    // Prompt for entering array elements
    printf("Enter elements in array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    // Sort the array in ascending order using the bubble sort algorithm
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (A[j] < A[i]) {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    // Display the sorted array
    printf("Sorted Array\n");
    for (i = 0; i < n; i++)
        printf("%d\n", A[i]);

    return 0;
}
