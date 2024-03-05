//Author: dhundhun1111
//Date : 04-03-2024

//Q2.WAP to find Fahrenheit for a given centigrade temperature. Note: C = (F – 32) * 5/9 and F = C * (9/5) + 32]

#include <stdio.h>

int main()
{
    int Cel, Fahr; // Declare variables for the values

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%d", &Cel);

    // Convert Celsius to Fahrenheit using the formula F = C * (9/5) + 32
    Fahr = ((Cel*9)/5) + 32; // Can't use Cel * (9/5) because it 9/5 gives 1, so first multiply Cel with 9 then divide by 5

    // Display the result
    printf("Temperature in Fahrenheit: %d\n", Fahr);

    return 0;
}