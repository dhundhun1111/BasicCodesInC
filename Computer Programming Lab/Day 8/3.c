//Author: dhundhun1111
//Date: 05-03-2024

//Q3. WAP to check whether a number n is prime number or not.

#include <stdio.h>

int main()
{
    int n, isPrime = 1; // Assume the number is prime by default

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for prime or not
    if (n <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = 0; // If divisible by any number other than 1 and itself, it's not prime
                break;
            }
        }
    }

    // Print the result
    if (isPrime) {
        printf("%d is a Prime Number.\n", n);
    } else {
        printf("%d is not a Prime Number.\n", n);
    }

    return 0;
}