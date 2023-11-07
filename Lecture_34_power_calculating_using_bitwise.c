#include<stdio.h>

int main()
{
    int n,k;
    printf("Enter any number \n");// Prompt user to enter any number
    scanf("%d",&n);//read value for n from user
    k = 1<<n; // calculate the power of 2 by shifting bit of 1 n times in left 
    printf("2 to the power of %d is %d",n,k);
    return 0;
}
