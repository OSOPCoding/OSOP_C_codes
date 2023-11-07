#include<stdio.h>

int main()
{
    int n,m;
    printf("Enter value of n \n");  // prompt user to enter value of n 
    scanf("%d",&n);// read value of n 
    printf("Enter value of m\n");// prompt user to enter value of m
    scanf("%d",&m);// read value of m
    int i ;
    int g;
    for(i=1;i<=m && i<=n;i++)// Here we iterate for loop to find greatest common factor 
    {
       if(m%i==0 && n%i==0)// Here we check is n is divisible by n 
          g = i;
    }
    printf("GCD = %d",g);
    return 0;
}