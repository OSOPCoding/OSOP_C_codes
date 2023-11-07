
#include<stdio.h>
int main()
{
    int n;
    printf("Enter value of n \n");//prompt user to enter any value
    scanf("%d",&n);// read value for n from user

    // Check n is even or odd by using ternay operator
    (n%2==0 ? printf("%d is even",n):printf("%d is odd ",n));
    return 0;
}