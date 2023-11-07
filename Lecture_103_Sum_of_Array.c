#include <stdio.h>

// Function prototype for calculating the sum of an array
int array_sum(int *, int);

int main() {
    int A[10], i, n, s;

    // Prompt for the length of the array
    printf("Enter Length of Array\n");
    scanf("%d", &n);

    // Prompt for entering elements in the array
    printf("Enter elements in Array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    // Call the array_sum function to calculate the sum of the array
    s = array_sum(&A[0], n);

    // Display the sum of the array
    printf("Sum is %d", s);
    return 0;
}

// Function to calculate the sum of an array
int array_sum(int *ptr, int x) {
    int i, sum = 0;

    for (i = 0; i < x; i++) {
        sum = sum + *ptr;
        ptr = ptr + 1;
    }

    return sum;
}
