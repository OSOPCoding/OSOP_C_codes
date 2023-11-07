#include<stdio.h>

int square(int x)
{
    return x*x;
}
int main()
{
    int (*ptr) (int) = square;
    int s , a=4;
    s = ptr(a);
    printf("square is %d",s);
    return 0;
}