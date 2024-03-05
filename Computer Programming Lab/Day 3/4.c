//Author: dhundhun1111
//Date : 04-03-2024

//Q4. WAP to calculate area of a triangle who’s base and height are user input. 

#include <stdio.h>

int main()
{
    float base, height, area;

    // Input base and height from the user
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    // Calculate the area using the formula: Area = (1/2) * base * height
    area = 0.5 * base * height;

    // Display the result
    printf("Area of the triangle is: %.2f\n", area);

    return 0;
}