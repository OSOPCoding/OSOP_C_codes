#include<stdio.h>
int main()
{
    int n,i,x,prod;
    float pw,k,sum;
    printf("Enter value of n\n");// prompt user to enter value of n
    scanf("%d",&n);// read value for n from user
    printf("Enter value of x\n");//prompt user to enter value of x
    scanf("%d",&x);//read value for x from user
    i = 1;
    pw = 1;
    sum = 1;
    prod = 1;
    while(i<=n)// In this while loop we find the sum of these series x+x^2/!2+x^3/!3+ ...N
    {
        pw = pw*x;
        prod =  prod*i;
        k = pw/prod;
        sum = sum+k;
        i = i+1;
    }
    printf("sum is %f",sum);
    return 0;
}
