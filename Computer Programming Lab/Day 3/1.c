//Author: dhundhun1111
//Date : 04-03-2024

//Q1. WAP to perform the addition of two integers and display the result. Input must be given by user.

#include <stdio.h> // header file name stdio means 'standard input output'

int main() // program execution always starts from main function
{
    int num1, num2; //Declaring the two integer variables
    printf("Enter two numbers: "); // prints this line message to console for user's convenience
    scanf("%d %d", &num1, &num2); //%d is format specifier for integer input, &num1 is address of num1 variable declared above 
    
    int sum; //Declaring a variable that stores the sum of two numbers
    sum = num1 + num2; //Assigning the sum to the 'sum' variable
    
    printf("The sum is : %d", sum); // prints the sum to the console , no need to give address(&) in printf

    return 0; //returns 0 and ends main function, aka end of program ...
}