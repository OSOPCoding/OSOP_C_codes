
#include<stdio.h>
int main()
{
     int i,x,y,prod;

     printf("Enter Base\n");// Prompt user to enter Base
     scanf("%d",&x);// read value for x from user
     printf("Enter power \n");// Promt user to enter power
     scanf("%d",&y);// read value for y from user
     i = 1;
     prod = 1;
     while(i<=y) // Here we calculate power of x with the use of while loop
     {
         prod = prod * x;
         i = i+1;
     }
     printf("%d to the power %d  is %d",x,y,prod);
     return 0;
}
