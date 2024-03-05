//Author: dhundhun1111
//Date: 05-03-2024

//Q1. WAP to convert given second into its equivalent hour, minute and second as per the following format. 

#include <stdio.h>

int main()
{
    int totalSeconds, hours, minutes, remainingSeconds;

    // Input total seconds from the user
    printf("Enter total seconds: ");
    scanf("%d", &totalSeconds);

    // Calculate hours, minutes, and remaining seconds
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    remainingSeconds = totalSeconds % 60;

    // Display the results
    printf("%d second = %d Hour, %d Minute and %d Second\n", totalSeconds, hours, minutes, remainingSeconds);

    return 0;
}