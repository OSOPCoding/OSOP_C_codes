#include <stdio.h>


int main()
{
    // Function prototype for calculating the area of a circle
    float area_circle(int);
    int radius;
    float area;
    // Prompt the user to enter the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    // Calculate the area of the circle using the area_circle function
    area = area_circle(radius);

    // Display the calculated area of the circle
    printf("Area of the circle is %f", area);

    return 0;
}

// Function definition for calculating the area of a circle
float area_circle(int r)
{
    float ar;
    ar = 3.14 * r * r;
    return ar;
}
