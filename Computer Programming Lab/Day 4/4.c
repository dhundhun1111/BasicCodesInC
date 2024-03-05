//Author: dhundhun1111
//Date: 05-03-2024

//Q4. WAP to find the sum of all digits of a three-digit number. Number must be a user input.

#include <stdio.h>

int main()
{
    int num, d1, d2, d3, sum;

    // Input a three-digit number from the user
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    // Extract each digit
    d1 = num / 100; // first digit extracted
    d2 = (num % 100) / 10; // second digit extracted using reamining two digits that we extract using modulo
    d3 = num % 10; //third digit extracted

    // Calculate the sum of all digits
    sum = d1 + d2 + d3;

    // Display the results
    printf("Sum of all digits: %d\n", sum);
    return 0;
}