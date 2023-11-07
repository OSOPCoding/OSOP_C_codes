
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any two values \n");//Prompt user to print enter two values
    scanf("%d%d",&a,&b);// read value of a ,b from user

    if(a==b)// Here we check whether a and b is equal or which one greater with the use nested if else
      printf("Both are equal");
    else
    {
       if(a>b)
          printf("%d is greater",a);
        else
         printf("%d is greater",b); 
    }
  return 0;
}
