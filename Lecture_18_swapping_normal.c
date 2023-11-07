#include<stdio.h>
#include<conio.h>

void main() {
    int a, b;  
   
    
    printf("Enter two numbers:\n");  // Prompt the user to enter two numbers
    scanf("%d%d", &a, &b);  // Read the values of a and b from user input
    
    printf("Values before swapping: a = %d, b = %d\n", a, b);  
    // Here we swap two variables value with using third variable
    int temp;  
    temp = a;  
    a = b;    
    b = temp;  
    
    printf("Values after swapping: a = %d, b = %d", a, b);  
    
    getch(); 

}
