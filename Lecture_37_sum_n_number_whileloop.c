
#include<stdio.h>
int main()
{
     int n,i,sum;
     printf("Enter any number\n");// Prompt user to enter any number
     scanf("%d",&n);// read value for n from user
     i = 1;
     sum = 0;
     while(i<=n)//Here we calculate sum of n number with use of while loop 
     {
        sum= sum+i;
        i = i+1;
     }
     printf("sum of n natural number is %d",sum);
     return 0;
}
