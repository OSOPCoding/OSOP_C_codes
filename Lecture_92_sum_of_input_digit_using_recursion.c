#include<stdio.h>


int main()
{
   // Function declaration
   int sum_digit(int);

    int n, s;
    
    printf("Enter the value of n: \n");// prompt user to enter value of n
    scanf("%d", &n);
    
    // Call to sum_digit() function to calculate the sum of digits
    s = sum_digit(n);
    
    printf("The sum of digits is %d", s);
    
    return 0;
}

// Function definition for sum_digit()
// This function calculates the sum of digits recursively
int sum_digit(int x)
{
    int sum;
    
    if(x == 0)
        sum = 0;
    else 
        sum = x % 10 + sum_digit(x / 10);  // Recursive call to sum_digit()
    
    return sum;
}
