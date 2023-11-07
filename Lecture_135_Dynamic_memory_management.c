#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1, *ptr2, *ptr3;

    // Allocate memory for three integer pointers
    ptr1 = (int *)malloc(sizeof(int));
    ptr2 = (int *)malloc(sizeof(int));
    ptr3 = (int *)malloc(sizeof(int));

    printf("Enter two values\n");
    // Read input values and store them at the memory locations pointed to by ptr1 and ptr2
    scanf("%d %d", ptr1, ptr2);

    // Calculate the sum of the values pointed to by ptr1 and ptr2 and store it in ptr3
    *ptr3 = *ptr1 + *ptr2;

    // Print the result
    printf("Addition is %d", *ptr3);

    // Free the allocated memory
    free(ptr1);
    free(ptr2);
    free(ptr3);

    return 0;
}
