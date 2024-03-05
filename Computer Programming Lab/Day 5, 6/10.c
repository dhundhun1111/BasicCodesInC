//Author: dhundhun1111
//Date: 05-03-2024

//Q 10. WAP to find the roots of a quadratic equation ax2+bx+c=0 using switchcase statement.

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float D, R1, R2;

    // Input coefficients from the user
    printf("Enter coefficients (a, b, c) of the quadratic equation ax^2 + bx + c = 0:\n");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    D = (b * b) - (4 * a * c);

    // Use switch-case based on the discriminant
    switch (signbit(D)) {
        case 0: // Positive discriminant (Two real and distinct roots)
            R1 = (-b + sqrt(D)) / (2 * a);
            R2 = (-b - sqrt(D)) / (2 * a);
            printf("Roots are real and distinct:\n");
            printf("Root 1 = %.2f\n", R1);
            printf("Root 2 = %.2f\n", R2);
            break;
        case 1: // Negative discriminant (Complex roots)
            {
                float realPart = -b / (2 * a);
                float imaginaryPart = sqrt(-D) / (2 * a);
                printf("Roots are complex and conjugates of each other:\n");
                printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
                printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
            }
            break;
        default: // Zero discriminant (Two real and equal roots)
            R1 = R2 = -b / (2 * a);
            printf("Roots are real and equal:\n");
            printf("Root 1 = Root 2 = %.2f\n", R1);
            break;
    }

    return 0;
}