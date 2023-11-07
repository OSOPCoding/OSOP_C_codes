
#include<stdio.h>
int main()
{
    int n;
    printf("Enter value of n \n");//prompt user to enter any value
    scanf("%d",&n);// read value for n from user

    if (n & 1 == 1)// Check if the least significant bit of 'n' is 1
      printf("%d is odd", n);
    else
      printf("%d is even", n);

    return 0;
}
