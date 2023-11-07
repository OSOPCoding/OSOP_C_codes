
#include<stdio.h>
int main()
{
     int n,i,esum, osum;
     printf("Enter any number\n");// Prompt user to enter any number
     scanf("%d",&n);// read value for n from user
     i = 1;
     esum = 0;
     osum = 0;
     while(i<=n)//Here we calculate sum of n even and odd number with use of while loop
     {
        if(i%2==0)
           esum = esum +i;
        else
           osum = osum +i;
       i = i+1;
     }
     printf("esum is %d and osum is %d",esum,osum);
     return 0;
}