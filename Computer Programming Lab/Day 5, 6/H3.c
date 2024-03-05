//Author: dhundhun1111
//Date: 05-03-2024

//Q H3. WAP to check whether the triangle is equilateral, isosceles or scalene (Triangle consists of three sides of provided lengths n1, n2 and n3 units). (Note: Equilateral: Two sides are equal. Isosceles: Three sides are equal.Scalene: Three sides are different to each other.) 

#include <stdio.h>

int main()
{
    int n1, n2, n3;

    // Input side lengths from the user
    printf("Enter the length of side 1: ");
    scanf("%d", &n1);

    printf("Enter the length of side 2: ");
    scanf("%d", &n2);

    printf("Enter the length of side 3: ");
    scanf("%d", &n3);

    // Check the type of triangle
    if (n1 == n2 && n2 == n3) {
        printf("The triangle is equilateral.\n");
    } else if (n1 == n2 || n2 == n3 || n1 == n3) {
        printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is scalene.\n");
    }
    
    return 0;
}