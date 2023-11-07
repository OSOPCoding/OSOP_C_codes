#include <stdio.h>

int main() {
    int A[5][5], i, j, m, n;

    // Input the dimension of the matrix
    printf("Enter the dimension of matrix\n");
    scanf("%d%d", &m, &n);

    // Input elements for the matrix
    printf("Enter elements in matrix\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    if (m == n) {
        // Check if the matrix is square (same number of rows and columns)
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                if (i == j)
                    printf("%d\t", A[i][j]);
                else
                    printf(" \t");
            }
            printf("\n");
        }
    } else {
        printf("Diagonal matrix is not possible\n");
    }

    return 0;
}
