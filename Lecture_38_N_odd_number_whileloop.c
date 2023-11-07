
#include<stdio.h>
int main()
{
     int n,i,j;
     printf("Enter any number\n");// Prompt user to enter any number
     scanf("%d",&n);// read value for n from user
     i = 1;
     j = 1;
     while(i<=n)// Here we are printing n odd number with use of while loop
     {
         printf("%d\n",j);
         j = j+2;
         i = i+1;
     }
     return 0;
}
