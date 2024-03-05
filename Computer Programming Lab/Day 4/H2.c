//Author: dhundhun1111
//Date: 05-03-2024

//Q H2.WAP to swap the contents of two variables by using a single statement for swap. 

#include <stdio.h>

int main()
{
    int num1, num2;

    // Input two integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Swap the contents of the variables using a single statement
    num1 = num1 + num2 - (num2 = num1);

    // Display the swapped values
    printf("\nAfter swapping:\n");
    printf("First integer: %d\n", num1);
    printf("Second integer: %d\n", num2);
    return 0;
}