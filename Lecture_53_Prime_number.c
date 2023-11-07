#include<stdio.h>
int main()
{
    int n,i,flag;
    printf("Enter The Number \n ");//Here we prompt user to enter a value
    scanf("%d",&n);// Read the value of n from user
    i = 2;
    flag = 1;
    while(i<n && flag ==1)// Here iterate while loop to check input number is divisble by one or more number or not
    {
        if(n%i==0)// here we check n is divisible i or not
          flag = 0;
        i = i +1;
    }
    if(flag ==1 ) // Here we check flag is equal to one or noy
      printf("Prime no");
    else 
      printf("Not prime no");
    return 0;
}