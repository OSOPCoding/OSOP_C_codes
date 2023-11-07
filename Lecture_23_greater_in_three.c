#include<stdio.h>

int main()
{
     int a,b,c;
    printf("Enter any three value\n");//Promt user to Enter three values 
    scanf("%d%d%d",&a,&b,&c);// read value for a,b,c from user
    
    if(a>b)// here we check which one is greater in a, b, c using nested if else
    {
        if(a>c) 
          printf("%d is greater",a);
        else
          printf("%d is greater",c);

    }
    else
    {
        if(b>c)  
          printf("%d is greater",b);
        else
          printf("%d is greater",c);
    }
    return 0;
}