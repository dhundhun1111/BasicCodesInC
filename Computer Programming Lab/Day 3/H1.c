//Author: dhundhun1111
//Date : 04-03-2024

//Q H1. Write a C program to perform swapping of two integers without using a third variable.

#include <stdio.h>

int main()
{
    int num1, num2;

    // Input two integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Displaying the numbers before swapping
    printf("\nBefore swapping:\n");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    // Swapping without using a third variable
    num1 = num1 + num2;  
    num2 = num1 - num2;
    num1 = num1 - num2;

    // eg num1 = 10, num2 = 20 , then num1 = num1 + num 2 gives num1 = 10 + 20, now num2 = num1 - num2 gives num2 = 10 + 20 - 20, now num2 is 10 ,then num1 = num1 - num2 gives num1 = 10 + 20 - 10 so num1 is now 20

    // Displaying the numbers after swapping
    printf("\nAfter swapping:\n");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    return 0;
}