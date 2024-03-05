//Author: dhundhun1111
//Date: 05-03-2024

//Q8. Print weekday name program according to given weekday number using switch-case. For Weekday numbers: (0, 1, 2, 3, 4, 5, 6), corresponding Weekday names: (Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, and Saturday). 

#include <stdio.h>

int main()
{
    int weekdayNumber;

    // Input weekday number from the user
    printf("Enter weekday number (0-6): ");
    scanf("%d", &weekdayNumber);

    // Print weekday name using switch-case
    switch (weekdayNumber) {
        case 0:
            printf("Weekday: Sunday\n");
            break;
        case 1:
            printf("Weekday: Monday\n");
            break;
        case 2:
            printf("Weekday: Tuesday\n");
            break;
        case 3:
            printf("Weekday: Wednesday\n");
            break;
        case 4:
            printf("Weekday: Thursday\n");
            break;
        case 5:
            printf("Weekday: Friday\n");
            break;
        case 6:
            printf("Weekday: Saturday\n");
            break;
        default:
            printf("Invalid weekday number. Please enter a number between 0 and 6.\n");
    }
    
    return 0;
}