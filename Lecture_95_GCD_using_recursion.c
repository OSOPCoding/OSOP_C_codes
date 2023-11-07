#include<stdio.h>

int main()
{
    // Function declaration
    int gcd(int a, int b);

    // Variable declaration
    int m, n, g;

    // Prompt user to enter two values
    printf("Enter two values: ");
    scanf("%d %d", &n, &m);

    // Call the gcd() function to calculate the GCD
    g = gcd(n, m);

    // Print the GCD
    printf("GCD of %d and %d is %d", n, m, g);

    return 0;
}

// Function definition for gcd()
int gcd(int a, int b)
{
    if (b != 0)
        return gcd(b, a % b);  // Recursive call with the remainder
    else
        return a;  // Base case: when the remainder becomes zero, return a (the divisor)
}
