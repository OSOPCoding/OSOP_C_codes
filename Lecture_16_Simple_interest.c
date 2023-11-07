#include<stdio.h>
#include<conio.h>


void main()
{
    int prin;
    float rate,time,si;
    // use clrscr() if you are using  turbo c++

    printf("Enter priciple amount\n");// Prompt user to enter principle and read value in prin
    scanf("%d",&prin);
    printf("Enter rate of interest\n");// Prompt user to enter rate of interest and read value in rate
    scanf("%f",&rate);
    printf("Enter time\n");// Prompt user to enter time and read value in time
    scanf("%f",&time);

    si = (prin* rate * time )/ 100;
    printf("simple interest is %f",si);
    getch();
}
 