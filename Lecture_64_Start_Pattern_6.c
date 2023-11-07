#include<stdio.h>

int main()
{
    int n, i, j;
    
    // Outer loop for the rows
    for(i = 4; i >= 1; i--)
    {
        // Inner loop for printing spaces before asterisks
        for(j = 1; j <= 4 - i; j++)
            printf("  "); 
            
        // Inner loop for printing asterisks in increasing order
        for(j = i; j >= 1; j--)
            printf("* "); 
        
        // Inner loop for printing asterisks in decreasing order
        for(j = 2; j <= i; j++)
            printf("* "); 
            
        printf("\n"); // Move to the next line after each row of asterisks
    }
    
    return 0;
}
