//Author: dhundhun1111
//Date: 05-03-2024

//Q3. WAP to find the sum of 1st and last of a six-digit number. Number must be a user input.

#include <stdio.h>

int main()
{
    int num, first, last, sum;

    // Input a six-digit number from the user
    printf("Enter a six-digit number: ");
    scanf("%d", &num);

    // Extract the first digit
    first = num / 100000;

    // Extract the last digit
    last = num % 10;

    // Calculate the sum of the first and last digits
    sum = first + last;

    // Display the results
    printf("\nSum of the digits is: %d\n", sum);

    return 0;
}