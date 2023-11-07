#include<stdio.h>

int main()
{
    // Function prototype
    void exch(int, int);

    int a, b;
    printf("Enter two values:\n");
    scanf("%d%d", &a, &b);

    exch(a, b); // Call the exch function to exchange the values

    printf("a = %d and b = %d", a, b);
    return 0;
}

// Function definition for exch
// Exchanges the values of x and y
void exch(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
  