#include<stdio.h>

int main()
{
    int greater(int, int); // Function prototype for finding the greater number

    int a, b, g;
    printf("Enter the value of a, b:\n");//promt use to enter two values
    scanf("%d%d", &a, &b);

    g = greater(a, b); // Call the greater function to find the greater number

    printf("The greater number is %d", g);
    return 0;
}

// Function definition for finding the greater number
int greater(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
