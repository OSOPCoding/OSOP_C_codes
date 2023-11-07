#include<stdio.h>

int main()
{
     int n,r,sum;
     printf("Enter any number\n");// Prompt user to enter any number
     scanf("%d",&n);// read value for n from user
     sum = 0;
     while(n>0)//In this while loop we calculate sum of n input number
     {
        r = n%10;
        sum = sum+r;
        n = n/10;
     }
     printf("sum of input number is %d",sum);
     return 0;
}
