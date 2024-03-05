//Author: dhundhun1111
//Date: 05-03-2024

//Q5. WAP to print GCD and LCM of two numbers.

#include <stdio.h>

// Function to calculate GCD of two numbers
int GCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return GCD(b, a % b);
    }
}

// Function to calculate LCM of two numbers
int LCM(int a, int b) {
    return (a * b) / GCD(a, b);
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate and print GCD and LCM
    printf("GCD of %d and %d is: %d\n", num1, num2, GCD(num1, num2));
    printf("LCM of %d and %d is: %d\n", num1, num2, LCM(num1, num2));

    return 0;
}