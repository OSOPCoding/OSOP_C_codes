#include <stdio.h>

int main() {
    int A[10], n, i, sum;

    // Prompt the user to enter the length of the array (up to a maximum of 10)
    printf("Enter length of Array (max = 10)\n");
    scanf("%d", &n);

    // Prompt the user to enter elements in the array
    printf("Enter elements in Array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    // Initialize the sum to 0 before calculating the sum of array elements
    sum = 0;

    // Calculate the sum of elements in the array
    for (i = 0; i < n; i++)
        sum = sum + A[i];

    // Display the sum of the elements of the array
    printf("Sum of elements of the array is: %d", sum);

    return 0;
}
