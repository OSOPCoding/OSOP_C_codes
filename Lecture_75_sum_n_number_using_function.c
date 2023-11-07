#include <stdio.h>

int main()
{
    // Function prototype
    int sum_natural(int);

    int n, s;
    printf("Enter any number:\n");// promt use to enter a value
    scanf("%d", &n);

    s = sum_natural(n); // Call the sum_natural function to calculate the sum

    printf("Sum up to %d is %d", n, s);
    return 0;
}

// Function definition for sum_natural
// Calculates the sum of natural numbers up to x
int sum_natural(int x)
{
    int sum, i;
    sum = 0;

    for (i = 1; i <= x; i++)
    {
        sum = sum + i;
    }

    return sum; // Return the calculated sum
}
