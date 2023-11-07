#include<stdio.h>

int main()
{
    int n, i, j;
    
    // Outer loop for the rows
    for(i = 4; i >= 1; i--)
    {
        // Inner loop for printing asterisks in each row
        for(j = 1; j <= i; j++)
        {
            printf("* "); 
        }
        
        printf("\n"); // Move to the next line after each 
    }
    
    return 0;
}
