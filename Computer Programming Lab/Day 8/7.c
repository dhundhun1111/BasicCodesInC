//Author: dhundhun1111
//Date: 05-03-2024

//Q7. WAP to test whether an inputted number is a strong number or not. (A number is said to be Strong if sum of factorial of digits is equal to the original number)

#include <stdio.h>

// Function to calculate factorial of a number
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to check if a number is a strong number
int isStrongNumber(int num) {
    int originalNumber = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return (originalNumber == sum);
}

int main() {
    int num;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a strong number
    if (isStrongNumber(num)) {
        printf("%d is a Strong Number.\n", num);
    } else {
        printf("%d is not a Strong Number.\n", num);
    }

    return 0;
}
