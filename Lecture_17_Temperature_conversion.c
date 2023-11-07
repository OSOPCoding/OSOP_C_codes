#include<stdio.h>
#include<conio.h>

void main()
{
    float feh, cen;
    // use clrscr() if you are using  turbo c++
    printf("Enter temperature in degree feranite\n");//Here we  Prompt user to enter value of feranite
    scanf("%f",&feh);//Here we  read value of feh from user
    
    cen = 5/9.0  * (feh-32);//Here we  convert feranite to celcuis by using its formula
    
    printf("Now temperature in celcius  = %f",cen);
    getch();

}
