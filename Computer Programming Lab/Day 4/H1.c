//Author: dhundhun1111
//Date: 05-03-2024

//Q H1. WAP to reverse a three-digit number. Number must be a user input. 

#include <stdio.h>

int main()
{
    int num, revNum;

    // Input a three-digit number from the user
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    // Reverse the three-digit number
    revNum = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);

    // Display the results
    printf("\nOriginal number: %d\n", num);
    printf("Reversed number: %d\n", revNum);
    return 0;
}