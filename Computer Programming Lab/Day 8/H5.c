//Author: dhundhun1111
//Date: 05-03-2024

//Q H5. WAP to find out sum of series up to n terms. sum = x + x2/2! + x4/4! + x6/6! + ... + xn/n!

#include <stdio.h>

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n, x;
    double sum = 0.0;

    // Input the values of n and x from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of x: ");
    scanf("%d", &x);

    // Calculate the sum of the series
    for (int i = 0; i <= n; i += 2) {
        sum += 1.0 * pow(x, i) / factorial(i);
    }

    // Print the sum of the series
    printf("Sum of the series up to %d terms: %lf\n", n, sum);

    return 0;
}
