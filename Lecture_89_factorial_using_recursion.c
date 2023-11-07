#include <stdio.h>

// Function prototype for factorial function
int factorial(int);

int main()
{
    int n, f;
    printf("Enter any number:\n"); // Prompt the user to enter a value
    scanf("%d", &n);

    f = factorial(n); // Call the factorial function to calculate the factorial

    printf("Factorial of %d is %d", n, f);
    return 0;
}

// Recursive function to calculate the factorial of a number
int factorial(int x)
{
   int fact;
   if(x == 1)
     fact = 1;
   else
     fact = x * factorial(x - 1);
    
    return fact;
}
