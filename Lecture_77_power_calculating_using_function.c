#include<stdio.h>

int main()
{
    // Function prototype for powerxy function
    int powerxy(int, int);

    int p, x, y;
    printf("Enter base and power:\n");
    scanf("%d%d", &x, &y);

    p = powerxy(x, y); // Call the powerxy function to calculate the power

    printf("%d to the power of %d is %d", x, y, p);
    return 0;
}

// Function definition for powerxy
// Calculates the power of a number 'a' raised to the power 'b'
int powerxy(int a, int b)
{
    int i, prod;
    prod = 1;

    for (i = 1; i <= b; i++)
    {
        prod = prod * a;
    }

    return prod; // returning calculation
}
