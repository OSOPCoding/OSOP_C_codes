
#include<stdio.h>
int main()
{
     int n,r,rev,m;
     printf("Enter any number\n");// Prompt user to enter any number
     scanf("%d",&n);// read value for n from user
     rev = 0;
     m = n;
     while(n>0)//Here we reverse the input number to check it is palindrome or not
     {
        r = n%10;
        rev = rev *10+r;
        n = n/10;
     }

    if(rev==m)
       printf("%d is palindrome",m);// display input number is palindrome if condition is true
    else
       printf("%d is not palindrome",m); //display input number is not palindrome if condition is false

    return 0;
}
