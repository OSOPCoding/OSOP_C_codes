#include <stdio.h>

// Function prototype for reversing an array
void array_rev(int *, int);

int main() {
    int A[10], i, n;

    // Prompt for the length of the array
    printf("Enter Length of Array\n");
    scanf("%d", &n);

    // Prompt for entering elements in the array
    printf("Enter elements in Array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    // Call the array_rev function to reverse the array
    array_rev(&A[0], n);

    // Display the reversed array
    printf("Reverse array\n");
    for (i = 0; i < n; i++)
        printf("%d\n", A[i]);
    return 0;
}

// Function to reverse an array
void array_rev(int *ptr, int x) {
    int i, temp;

    // Reverse the array by swapping elements from the beginning and end
    for (i = 0; i < x / 2; i++) {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + (x - (i + 1)));
        *(ptr + (x - (i + 1))) = temp;
    }
}
