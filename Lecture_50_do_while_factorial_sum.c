
#include<stdio.h>
int main()
{
    int n,i,sum,prod;
    printf("Enter any number\n");//Prompt user to enter any value 
    scanf("%d",&n);//Read value for n from user
    i = 1;
    prod = 1;
    sum = 0;
    do// Here we calculate sum of factorial with help do while loop
    {
        prod = prod *i;
        sum = sum +prod;
        i = i+1;
    } while (i<=n);

    printf("sum is %d",sum);
    return 0; 
}