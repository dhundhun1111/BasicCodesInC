//Author: dhundhun1111
//Date: 05-03-2024

//Q H1. WAP to test whether a number entered through keyboard is ODD or EVEN. 

#include <stdio.h>

int main()
{
    int number;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is odd or even
    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}