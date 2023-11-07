
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three value\n");//Promt user to Enter three values 
    scanf("%d%d%d",&a,&b,&c);// read value for a,b,c from user

    if (a > b && a > c)  // Here we Check which one is greater in a,b,c with use of while loop
        printf("%d is greater", a); 
    {
        if (b > c)  
        {
            printf("%d is greater", b);  
        }
        else 
        {
            printf("%d is greater", c);  
        }
    }

  return 0;
}
