#include<stdio.h>

int main()
{
    // Function prototype for prime_check function
    int prime_check(int);

    int n, p;
    printf("Enter any number:\n");
    scanf("%d", &n);

    p = prime_check(n); // Call the prime_check function to check if the number is prime

    if (p == 1)
        printf("Prime number\n");
    else
        printf("Not a prime number\n");
    
    return 1;
}

// Function definition for prime_check
// Checks if a number x is prime
// Returns 1 if the number is prime, 0 otherwise
int prime_check(int x)
{
    int i, flag;
    i = 2;
    flag = 1;

    while (i < x && flag == 1)
    {
        if (x % i == 0)
            flag = 0; // If x is divisible by i, set flag to 0 (not prime)
        
        i++;
    }

    return flag;
}
