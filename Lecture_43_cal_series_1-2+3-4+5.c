#include<stdio.h>

int main()
{
     int n,i,j,sum;
     printf("Enter any number\n");// Prompt user to enter any number
     scanf("%d",&n);// read value for n from user
     i = 1;
     sum = 0;
     while(i<=n)//Here  we are calculating series of 1-2+3-4+5 use while loop 
     {
         if(i%2==0)
           sum = sum -i;
        else
           sum = sum +i;
       i = i+1;
     }
     printf("sum  is %d",sum);
     return 0;
}
