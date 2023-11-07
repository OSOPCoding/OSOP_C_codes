
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter any three value\n");//Promt user to Enter three values 
    scanf("%d%d%d",&a,&b,&c);// read value for a,b,c from user

    // Check which value is greater among a, b, and c using nested ternary operators
    (a>b?(a>c?printf("%d is greater",a):printf("%d is greater",c)):(b>c?printf("%d is greater",c): printf("%d is greater",b)));
    return 0 ;
}