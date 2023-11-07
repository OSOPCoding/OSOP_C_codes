#include<stdio.h>
int main()
{
     int n,r,rev;
     printf("Enter any number\n");// Prompt user to enter any number
     scanf("%d",&n);// read value for n from user
     rev = 0;
     while(n>0)//In this while loop we reverse the input number
     {
        r = n%10;
        rev = rev *10+r;
        n = n/10;
     }
     printf("reverse of input number is %d",rev);
     return 0;
}
