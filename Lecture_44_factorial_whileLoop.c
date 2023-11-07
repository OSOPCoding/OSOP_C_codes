#include<stdio.h>
int main()
{
     int n,i,prod;
     printf("Enter any number\n");// Prompt user to enter any number
     scanf("%d",&n);// read value for n from user
     i = 1;
     prod = 1;
     while(i<=n)//Iterate while loop until  i less than or equal to n 
     {
         prod = prod * i;
         i = i+1;
     }
     printf("Factorial is %d",prod);
     return 0;
}
