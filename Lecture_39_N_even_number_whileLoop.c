#include<stdio.h>
int main()
{
     int n,i,j;
     printf("Enter any number\n");// Prompt user to enter any number
     scanf("%d",&n);// read value for n from user
     i = 1;
     while(i<=n)// Here we are printing n even number with use of while loop
     {
         j = 2*i;
         printf("%d\n",j);
         i = i+1; 
     }
     return 0;
}
