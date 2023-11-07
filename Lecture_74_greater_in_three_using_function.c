#include<stdio.h>

int main()
{
    int greater(int, int, int); // Function prototype for finding the greater number

    int a, b, c, g;
    printf("Enter the value of a, b, c:\n");
    scanf("%d%d%d", &a, &b, &c);

    g = greater(a, b, c); // Call the greater function to find the greater number

    printf("The greater number is %d", g);
    return 0;
}

// Function definition for finding the greater number
int greater(int x, int y, int z)
{
    if (x > y && x > z)
        return x;
    if (y > z)
        return y;
    return z;
}
