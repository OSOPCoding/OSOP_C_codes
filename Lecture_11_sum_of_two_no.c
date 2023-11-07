#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b, sum;
    // use clrscr() if you are using  turbo c++
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    // Add the two integer values and store the result in the 'sum' variable
    sum = a + b;

    // Display the sum to the user
    printf("Sum of a and b is: %d\n", sum);

    getch();
}
