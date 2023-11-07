#include <stdio.h>

int main() {
    int A[5][5], i, j, m, n;
    int *ptr_array[3], *ptr, sum;

    // Input the dimension of the matrix
    printf("Enter Dimension\n");
    scanf("%d%d", &m, &n);

    // Input elements for the matrix
    printf("Enter elements of matrix\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    } 

    // Store the pointers to each row of the matrix in ptr_array
    for (i = 0; i < m; i++) {
        ptr_array[i] = A[i];
    }

    // Calculate and print the sum of each row
    for (i = 0; i < m; i++) {
        ptr = ptr_array[i];
        sum = 0;
        for (j = 0; j < n; j++) {
            sum = sum + *ptr;
            ptr = ptr + 1;
        }
        printf("Sum of %d array is %d\n", i + 1, sum);
    }

    return 0;
}
