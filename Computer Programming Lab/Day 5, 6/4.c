//Author: dhundhun1111
//Date: 05-03-2024

//Q4. WAP to determine whether a year entered through the keyboard is a leap year or not. 

#include <stdio.h>

int main()
{
    int year;

    // Input a year from the user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the entered year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}