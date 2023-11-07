#include<stdio.h>

int main()
{
    // Function prototype for reverse function
    int reverse(int);

    int n, rv;
    printf("Enter any value:\n");
    scanf("%d", &n);

    rv = reverse(n); // Call the reverse function to calculate the reverse

    printf("Reverse of %d is %d", n, rv);
    return 0;
}

// Function definition for reverse
// Calculates the reverse of a number x
int reverse(int x)
{
    int rev, r;
    rev = 0;

    while (x > 0)
    {
        r = x % 10;      // Extract the last digit of x
        rev = rev * 10 + r;  // Append the last digit to the reverse number
        x = x / 10;      // Remove the last digit from x
    }

    return rev;  // Return the reverse number
}
