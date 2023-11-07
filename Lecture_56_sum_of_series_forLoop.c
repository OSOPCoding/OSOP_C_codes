#include<stdio.h>

int main()
{
    int n;
    int i ,sum, prod,j;
    printf("Enter value of n \n");// Prompt user to enter value fo n 
    scanf("%d",&n);// read value of n 
    sum = 0;
    for(i = 1;i<=n;i++) // Here we iterate this for loop calculate sum fo series
    {
        prod = 1;
        for(j = 1;j<=2*i-1;j++)// Here we calculate factorial with the use of for loop
        {
            prod = prod *j;
        }
        sum = sum+prod;

    }
    printf("sum of series is %d",sum);
    return 0;
}