//Author: dhundhun1111
//Date: 05-03-2024

//Q H2. WAP to find out 1/n! 

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
    int n;

    // Input the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate and print the value of 1/n!
    double result = 1.0 / factorial(n);
    
    printf("1/%d! = %lf\n", n, result);

    return 0;
}