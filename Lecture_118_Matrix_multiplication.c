#include <stdio.h>

int main() {
    int A[5][5], B[5][5], C[5][5];
    int i, j, m, n, p, q, k;

    // Input dimensions of the first matrix
    printf("Enter dimension of First Matrix\n");
    scanf("%d%d", &m, &n);

    // Input elements for the first matrix
    printf("Enter elements in first matrix\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input dimensions of the second matrix
    printf("Enter dimension of second Matrix\n");
    scanf("%d%d", &p, &q);

    // Input elements for the second matrix
    printf("Enter elements in second matrix\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Check if matrices have compatible dimensions for multiplication
    if (n == p) {
        // Perform matrix multiplication
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                C[i][j] = 0;
                for (k = 0; k < n; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        // Display the result of matrix multiplication
        printf("Matrix Multiplication is\n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }
    } 
    return 0;
}
