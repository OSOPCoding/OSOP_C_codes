#include<stdio.h>

int main()
{
    int a,b,choice,c;
    printf("Enter value of a and b \n");// Prompt user to enter value of a and b
    scanf("%d%d",&a,&b);// read value for a ,b from user
    // Prompt user a full menu
    printf("***** MENU *****\n");\
    printf("1 : Addition\n");
    printf("2 : subtraction\n");
    printf("3 : multiplication\n");
    printf("4 : Division\n");
    printf("***** MENU *****\n");
    printf("Enter you choice\n");// Promt user to enter your choice
    scanf("%d",&choice);// read choice of user from user in choice

    if(choice==1) // Here we check the choice of user with use of ladder if else
    {
        c = a+b;
        printf("sum is %d",c);
    }
    else if(choice==2)
    {
        c = a-b;
        printf("subtraction is %d",c);
    }
    else if(choice==3)
    {
        c = a*b;
        printf("mulitplication is %d",c);
    }
    else if(choice == 4)
    {
        c = a/b;
        printf("Division is %d",c);
    }
    else
      printf("Wrong choice");

    return 0;
}
