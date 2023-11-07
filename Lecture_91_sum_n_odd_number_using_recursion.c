#include <stdio.h>


int main()
{

    // Function prototype
    int sum(int);
    int n, s;
    printf("Enter any number:\n"); // Prompt the user to enter a number
    scanf("%d", &n);

    s = sum(n); // Calculate the sum using the sum() function

    printf("Sum of the first %d numbers is %d", n, s);
    return 0;
}

// Recursive function to calculate the sum of the first x numbers
int sum(int x)
{
    int s;
    if (x == 1)
        s = 1; // Base case: when x equals 1, return 1
    else
        s = 2 * x - 1 + sum(x - 1); // Recursive case: sum of (2*x-1) and sum of the first (x-1) numbers

    return s;
}
