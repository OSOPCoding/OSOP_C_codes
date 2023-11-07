#include<stdio.h>

void main()
{
    int a =10;
    short int *ptr ;
    ptr = &a;
    printf("%d\n",ptr);
    printf("%u",ptr);
}