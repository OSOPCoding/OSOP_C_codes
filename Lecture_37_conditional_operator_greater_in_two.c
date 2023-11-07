#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter any two values \n");//Prompt user to print enter two values
    scanf("%d%d",&a,&b);// read value of a ,b from user

    // check which one is greater in a and b using ternary operator
    (a>b?printf("%d is greater",a): printf("%d is greater",b)); 
    return 0;
}