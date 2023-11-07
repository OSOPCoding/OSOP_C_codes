#include<stdio.h>

int main()
{
    int n,k;
    printf("Enter any number \n");// Prompt user to enter any number
    scanf("%d",&n);//read value for n from user
    
    k =  n %2;// Store the remainder of n divide by 2 in k
    if(k==0)// check is k is equal to 0
      printf("%d is even",n);
    else
      printf("%d is odd",n);

    return 0;
}
