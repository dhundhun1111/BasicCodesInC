//Author: dhundhun1111
//Date : 04-03-2024

//Q5. Write a C program to perform swapping of two integers using a third variable. 

#include <stdio.h>

int main()
{
    int num1, num2, temp;

    // Input two integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Displaying the numbers before swapping
    printf("\nBefore swapping:\n");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    // Swapping using a third variable
    temp = num1; //store num1 in temp
    num1 = num2; //assign num2 value to num1
    num2 = temp; //assign num1 value stored in temp to num2

    // Displaying the numbers after swapping
    printf("\nAfter swapping:\n");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    return 0;
}