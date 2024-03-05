//Author: dhundhun1111
//Date: 05-03-2024

//Q5. WAP to find the roots of a quadratic equation ax2+bx+c=0 using if-else statement. 

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float D, R1, R2;

    // Input coefficients from the user
    printf("Enter coefficients (a, b, c) of the quadratic equation ax^2 + bx + c = 0:\n");
    scanf("%f %f %f", &a, &b, &c);

    // We use Shreedharacharya's Rule Here.

    // Calculate the Discriminant
    D = (b * b) - (4 * a * c);

    // Check the value of Discriminant to determine the roots
    if (D > 0) {
        // Two real and distinct roots
        R1 = (-b + sqrt(D)) / (2 * a);
        R2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %.2f\n", R1);
        printf("Root 2 = %.2f\n", R2);
    } else if (D == 0) {
        // Two real and equal roots
        R1 = R2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root 1 = Root 2 = %.2f\n", R1);
    } else {
        // Complex roots
        float realR = -b / (2 * a);
        float imgR = sqrt(-D) / (2 * a);
        printf("Roots are complex and conjugates of each other:\n");
        printf("Root 1 = %.2f + %.2fi\n", realR, imgR);
        printf("Root 2 = %.2f - %.2fi\n", realR, imgR);
    }

    return 0;
}