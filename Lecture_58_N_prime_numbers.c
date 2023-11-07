#include <stdio.h>

int main() {
    int i, n, j, flag, ctr;

    printf("Enter the value of n:\n");
    scanf("%d", &n);

    for (i = 1, ctr = 1; ctr <= n; i++) {
        flag = 1; // Assume 'i' is prime.
        j = 2; // Start checking divisibility from 2.

        while (j < i && flag == 1) {
            if (i % j == 0) {
                flag = 0; // 'i' is not prime if divisible.
            }
            j++;
        }

        if (flag == 1) {
            printf("%d\n", i); // Print the prime number.
            ctr++;
        }
    }

    return 0;
}
