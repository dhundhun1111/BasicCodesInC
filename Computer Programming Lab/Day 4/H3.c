//Author: dhundhun1111
//Date: 05-03-2024

//Q H3.WAP to add two times in hour, minute & second format entered through the keyboard in the format hh:mm:ss 

#include <stdio.h>

int main()
{
    int h1, m1, s1, h2, m2, s2;
    int sumHours, sumMinutes, sumSeconds;

    // Input first time in hh:mm:ss format
    printf("Enter the first time (hh:mm:ss): ");
    scanf("%d:%d:%d", &h1, &m1, &s1);

    // Input second time in hh:mm:ss format
    printf("Enter the second time (hh:mm:ss): ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    // Add the times
    sumSeconds = s1 + s2;
    sumMinutes = m1 + m2 + (sumSeconds / 60);
    sumHours = h1 + h2 + (sumMinutes / 60);

    // Adjust for overflow
    sumSeconds %= 60;
    sumMinutes %= 60;

    // Display the result
    printf("\nSum of the times: %02d:%02d:%02d\n", sumHours, sumMinutes, sumSeconds);
    return 0;
}