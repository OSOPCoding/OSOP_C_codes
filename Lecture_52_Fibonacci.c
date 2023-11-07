#include<stdio.h>
int main()
{
    int a,b,c,i,n;
    printf("Enter The Number \n ");//Here we prompt user to enter a value
    scanf("%d",&n);// Read the value of n from user
    i=1;
    a=-1;
    b=1;
    while(i<=n)// Here we printing fibonacci series using while loop
    {
        c=a+b;
        printf("%d \n ",c);
        a=b;
        b=c;
        i = i+1;
    }
    return 0;
}