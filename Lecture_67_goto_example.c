#include<stdio.h>

int main()
{
    int n, i, sum;

    printf("Enter value of n \n");// Prompt the user to enter a value for 'n' and store it in the variable
    scanf("%d", &n); 
    i = 1; 
    sum = 0; 

    sum_para: // Label for the goto statement
    sum = sum + i; 
    i = i + 1; 

    if(i <= n)
        goto sum_para; // Jump to the 'sum_para' label if 'i' is less than or equal to 'n'

    printf("sum is %d", sum); 

    return 0;
}
