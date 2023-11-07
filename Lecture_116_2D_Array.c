#include <stdio.h>

int main() {
    int A[2][3]; // Declare a 2x3 matrix

    printf("Enter elements in Matrix\n");

    // Loop to read elements into the matrix
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Elements in Matrix\n");

    // Loop to print elements from the matrix
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
