#include<stdio.h>



int main()
{
    int fibo(int x); // Function declaration
    int n, i, f;
    
    printf("Enter total no. of terms: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
    {
        f = fibo(i);  // Calculate the Fibonacci number for the current index
        printf("%d\n", f);  // Print the Fibonacci number
    }
    
    return 0;
}
// Function to calculate the nth Fibonacci number recursively
int fibo(int x)
{
    if(x == 1)
        return 0;  // Base case for the first Fibonacci number (0)
    if(x == 2)
        return 1;  // Base case for the second Fibonacci number (1)
    
    // Recursive call to calculate the Fibonacci number
    return (fibo(x - 1) + fibo(x - 2));
}