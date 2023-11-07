
#include<stdio.h>
int main()
{
     int n,i,j,sum;
     printf("Enter any number\n");// Prompt user to enter any number
     scanf("%d",&n);// read value for n from user
     i = 1;
     sum = 0;
     while(i<=n)// Here we are calculate the some of n even number with use of while loop
     {
        j = 2*i;
        sum = sum +j; 
        i = i+1;
     }
     printf("sum of n even number is %d",sum);
    return 0;
}
