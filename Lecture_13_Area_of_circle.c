#include<stdio.h>
#include<conio.h>

void main()
{
    int radius; 
    float  area;
    // use clrscr() if you are using  turbo c++
    
    printf("Ener radius\n");//prompt  the user to enter radius 
    scanf("%d",&radius);// read the of value of radus from user
    area = 3.14*radius * radius;// calculating area of circle 
    printf("Area of cirlce is %f",area); 
    getch();
}

