//Author: dhundhun1111
//Date: 05-03-2024

//Q H1. WAP to find out factors of a number.

#include <stdio.h>

int main()
{
    int number;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Print the factors of the number
    printf("Factors of %d are: ", number);

    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}