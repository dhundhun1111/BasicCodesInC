//Author: dhundhun1111
//Date: 05-03-2024

//Q6. WAP to find out factorial of a number. 

#include <stdio.h>

// Function to calculate factorial
unsigned long long calculateFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calculateFactorial(n - 1);
    }
}

int main() {
    int num;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is non-negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate and print the factorial
        printf("Factorial of %d is: %llu\n", num, calculateFactorial(num));
    }

    return 0;
}
