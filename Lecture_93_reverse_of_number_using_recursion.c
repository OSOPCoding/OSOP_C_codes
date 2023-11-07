#include<stdio.h>

int main()
{ 
    // Function declaration
    int reverse(int);
    int n, rev;
    
    printf("Enter value of n \n");  // Prompt the user to enter the value of n
    scanf("%d", &n);
    
    // Call the function to calculate the reverse of the number
    rev = reverse(n);
    
    printf("Reverse of %d is %d", n, rev);  // Print the reverse of the number
    return 0;
}

// Function definition for reverse()
// This function calculates the reverse of a number recursively
int reverse(int x)
{
    static int r, rev = 0;
    
    if(x != 0)
    {
        r = x % 10;
        rev = rev * 10 + r;
        reverse(x / 10);// Recursive call to reverse()
    }
    
    return rev;
}
