//Author: dhundhun1111
//Date: 05-03-2024

//Q5. WAP to find out sum of digits of a number.

#include <stdio.h>

int main()
{
    int number, digit, sum = 0;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the sum of digits
    while (number > 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    // Print the sum of digits
    printf("Sum of digits: %d\n", sum);
    
    return 0;
}