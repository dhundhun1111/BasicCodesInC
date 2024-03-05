//Author: dhundhun1111
//Date: 05-03-2024

//Q H3. WAP to find out (x^n)/n! 

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

    // Input the values of n and x from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of x: ");
    scanf("%d", &x);

    // Calculate and print the value of x^n/n!
    double result = 1.0 * x / factorial(n);

    printf("%d^%d/%d! = %lf\n", x, n, n, result);

    return 0;
}
