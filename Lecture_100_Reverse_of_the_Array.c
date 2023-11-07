#include <stdio.h>

int main() {
    int A[10], n, i, temp;

    // Prompt the user to enter the length of the array (up to a maximum of 10)
    printf("Enter length of Array (max = 10)\n");
    scanf("%d", &n);

    // Prompt the user to enter elements in the array
    printf("Enter elements in Array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    // Reverse the array by swapping elements from the beginning and end
    for (i = 0; i < n / 2; i++) {
        temp = A[i];
        A[i] = A[n - (i + 1)];
        A[n - (i + 1)] = temp;
    }

    // Display the reversed array
    printf("Reverse Array : \n");
    for (i = 0; i < n; i++)
        printf("%d\n", A[i]);

    return 0;
}
