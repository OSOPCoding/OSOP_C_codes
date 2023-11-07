#include <stdio.h>

int main() {
    int A[5][5], B[5][5], i, j, m, n;

    // Input dimensions of the matrix (maximum size is 5x5)
    printf("Enter the dimension of matrix (max = 5x5)\n");
    scanf("%d%d", &m, &n);

    // Input elements for the matrix
    printf("Enter the elements of matrix\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Transpose the matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            B[j][i] = A[i][j];
        }
    }

    // Display the transpose of the matrix
    printf("Transpose of matrix is \n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
