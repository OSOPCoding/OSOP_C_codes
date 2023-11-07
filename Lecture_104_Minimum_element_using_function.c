#include <stdio.h>

// Function prototype for finding the minimum value in an array
int array_min(int *, int);

int main() {
    int A[10], i, n, m;

    // Prompt for the length of the array
    printf("Enter Length of Array\n");
    scanf("%d", &n);

    printf("Enter elements in Array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    // Call the array_min function to find the minimum value in the array
    m = array_min(&A[0], n);

    printf("Minimum is %d", m);
    return 0;
}

// Function to find the minimum value in an array
int array_min(int *ptr, int x) {
    int i, min;

    // Initialize 'min' with the first element of the array
    min = *ptr;

    // Iterate through the array to find the minimum value
    for (i = 1; i < x; i++) {
        if (*(ptr + i) < min)
            min = *(ptr + i);
    }

    return min;
}
