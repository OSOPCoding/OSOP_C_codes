#include<stdio.h>

int main()
{
    // Function prototype for exch function
    void exch(int *, int *);

    int a, b;
    printf("Enter two values:\n");
    scanf("%d%d", &a, &b);

    exch(&a, &b); // Call the exch function with the addresses of a and b

    printf("a = %d and b = %d", a, b);
    return 0;
}

// Function definition for exch
// Exchanges the values of variables pointed by ptr1 and ptr2
void exch(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1;  
    *ptr1 = *ptr2; 
    *ptr2 = temp;  
}
