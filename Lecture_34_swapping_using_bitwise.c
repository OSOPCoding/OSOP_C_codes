//here we included Standard Input Output Header File by using "#". # is a preprocessing statement
#include<stdio.h>

//here we are defining a main function. This the point where program start running.
int main()
{
    int a,b; 
    printf("Enter two numbers:\n");  // Prompt the user to enter two numbers
    scanf("%d%d", &a, &b);  // Read the values of a and b from user input
    printf("values before swapping a = %d b = %d\n",a,b);
    //Here swap a and b using bitwise xor operator
    a = a ^ b;  
    b = a ^ b;  
    a = a ^ b;  

    printf("values after swapping a = %d b = %d",a,b);
    return 0;
}