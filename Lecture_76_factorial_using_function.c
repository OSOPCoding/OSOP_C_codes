#include <stdio.h>

int main()
{
    // Function prototype for factorial function
    int factorial(int);

    int n, f;
    printf("Enter any number:\n");// promt use to enter a value
    scanf("%d", &n);

    f = factorial(n); // Call the factorial function to calculate the factorial

    printf("Factorial of %d is %d", n, f);
    return 0;
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
