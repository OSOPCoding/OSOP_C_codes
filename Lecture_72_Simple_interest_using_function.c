#include <stdio.h>


int main() {
    
    // Function prototype for calculating simple interest
    float interest(float, float, float);
     float prin, rate, time, si;

    printf("Enter the principal amount: ");
    scanf("%f", &prin);

    printf("Enter the interest rate: ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate the simple interest using the calculateSimpleInterest function
    si = interest(prin, rate, time);

    printf("Simple Interest: %.2f\n", interest);

    return 0;
}

// Function definition for calculating simple interest
float interest(float p, float r, float t) {
    float s;
    s = (p * r * t) / 100;
    return s;
}
