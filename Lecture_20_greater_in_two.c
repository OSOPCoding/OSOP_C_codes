#include<stdio.h>

int main()
{
    int a,b; 
    printf("Enter two values \n");//Promt user to enter two Integer value
    scanf("%d%d",&a,&b);//read value for a and b from user
    
    if(a>b)// check which one is greater between a and b by using condition

      printf("%d is greater",a);
    else 
      printf("%d si greater",b);
    
    return 0; 

}
