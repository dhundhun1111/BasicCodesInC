//Author: dhundhun1111
//Date: 05-03-2024

//Q7. WAP to input any two integers, and provide a menu to the user to select any of the options as  add, subtract, multiply, divide and display the result accordingly

#include <stdio.h>

int main()
{
    int num1, num2, result;
    char choice;

    // Input two integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Display menu and get user's choice
    printf("\nSelect an operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice (1-4): ");
    scanf(" %c", &choice);

    // Perform the selected operation based on user's choice
    switch (choice) {
        case '1':
            result = num1 + num2;
            printf("Sum: %d\n", result);
            break;
        case '2':
            result = num1 - num2;
            printf("Difference: %d\n", result);
            break;
        case '3':
            result = num1 * num2;
            printf("Product: %d\n", result);
            break;
        case '4':
            if (num2 != 0) {
                // Check for division by zero
                result = num1 / num2;
                printf("Quotient: %d\n", result);
            } else {
                printf("Error: Cannot divide by zero.\n");
            }
            break;
        default:
            printf("Invalid choice. Please select a number between 1 and 4.\n");
    }
    
    return 0;
}