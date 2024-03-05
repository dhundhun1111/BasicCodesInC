//Author: dhundhun1111
//Date: 05-03-2024

//Q1. WAP to find the largest between two numbers.

#include <stdio.h>

int main()
{
    int num1, num2;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Determine the largest number using a conditional operator
    int largest = (num1 > num2) ? num1 : num2;

    // Display the result
    printf("\nThe largest number is: %d\n", largest);
    
    return 0;
}