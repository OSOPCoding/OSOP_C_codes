
#include<stdio.h>
#include<conio.h>

void main()
{
    char ch;
    // use clrscr() if you are using  turbo c++
    printf("Enter any uppercase alphabet");//Here we Promt user to enter any uppercase character
    scanf("%c",&ch);//Here we  read ch value from user

    ch = ch+32;//Here we  convert a character into upper case to lower case by 32 to in its ascii value
    
    printf("Lower case alphabet is '%c'",ch);
    getch();
}
