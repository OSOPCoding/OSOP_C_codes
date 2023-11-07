#include<stdio.h>
int main()
{
    int n,i,x,prod,j;
    float pw,k,sum;
    printf("Enter value of n\n");// prompt user to enter value of n
    scanf("%d",&n);// read value for n from user
    printf("Enter value of x\n");//prompt user to enter value of x
    scanf("%d",&x);//read value for x from user
    sum =0;
    for(i = 1;i<=n;i++)// Here we Iterate this for loop to caluculate sum of series 
    {
        pw = 1;
        prod = 1;
        for(j = 1;j<=2*i-1;j++)// Here we find factorial and power of x with the use of for loop
        {
            pw = pw*x;
            prod = prod *j;
        }
        k = pw / prod;
        sum = sum +k;
    }
    printf("sum is %f",sum);
    return 0;
}
