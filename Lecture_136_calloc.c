#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = NULL; // Initialize a pointer to int as NULL
    int i, n, sum;
    
    printf("Enter total number of elements\n");
    scanf("%d", &n);
    
    // Allocate memory for 'n' integers and assign the pointer to ptr
    ptr = (int *)calloc(n, sizeof(int));
    
    printf("Enter elements\n");
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr + i)); // Read elements and store them at memory locations pointed to by ptr
    }
    
    sum = 0;
    for (i = 0; i < n; i++) {
        sum += *(ptr + i); // Calculate the sum of the elements
    }
    
    printf("Total sum = %d", sum);
    
    // Free the dynamically allocated memory
    free(ptr);

    return 0;
}
