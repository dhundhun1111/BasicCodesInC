//Author: dhundhun1111
//Date : 04-03-2024

//Q3. WAP to calculate area of a circle while taking radius as user input.

#include <stdio.h>

int main()
{
    float radius, area; // Declare in float because we want ddecimal value

    // Input radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius); //%f --> format specifier for float

    // Calculate the area using the formula: Area = π * r^2
    area = 3.1415 * radius * radius;

    // Display the result
    printf("Area of the circle is: %0.2f\n", area); // %0.2f --> takes 2 decimal places in output

    return 0;
}
