#include <stdio.h>

int main() {
    int A[5][5], B[5][5], C[5][5];
    int i, j, m, n, p, q;

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

    // Check if matrices have compatible dimensions for addition
    if (m == p && n == q) {
        // Perform matrix addition
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                C[i][j] = A[i][j] + B[i][j];
            }
        }

        // Display the result of matrix addition
        printf("Matrix Addition is\n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
