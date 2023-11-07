#include <stdio.h>

// Function prototype for sum_series function
float sum_series(int, int);

// Function prototypes for helper functions
int factorial(int);
int powerxy(int, int);

int main()
{
    int n, x;
    float s;

    printf("Enter the value of x:\n");
    scanf("%d", &x);

    printf("Enter the total number of terms:\n");
    scanf("%d", &n);

    s = sum_series(n, x); // Call the sum_series function to calculate the sum of the series

    printf("Sum of the series is %f", s);

    return 0;
}

// Function definition for sum_series
// Calculates the sum of the series
float sum_series(int n1, int x1)
{
    int i, pw;
    float sum, fact, k;
    sum = 0;

    for (i = 1; i <= n1; i++)
    {
        pw = powerxy(x1, i);
        fact = factorial(i);
        k = pw / fact;
        sum = sum + k;
    }

    return sum;
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

    return prod;
}

// Function definition for factorial
// Calculates the factorial of a number x
int factorial(int x)
{
    int prod, i;
    prod = 1;

    for (i = 1; i <= x; i++)
    {
        prod = prod * i;
    }

    return prod;
}
