#include <stdio.h>

// Function prototype
int sum_natural(int);

int main()
{
    int n, s;
    printf("Enter any number:\n"); // Prompt user to enter a value
    scanf("%d", &n);

    s = sum_natural(n);

    printf("Sum up to %d is %d", n, s);
    return 0;
}

// Recursive function to calculate the sum of natural numbers up to x
int sum_natural(int x)
{
    int s;
    if (x == 1)
        s = 1; // Base case: when x equals 1, return 1
    else
        s = x + sum_natural(x - 1); // Recursive case: sum of x and sum of natural numbers up to x-1

    return s;
}
