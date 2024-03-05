//Author: dhundhun1111
//Date: 05-03-2024

//Q2. WAP to convert a distance in meter entered through keyboard into its equivalent kilometer and meter as per the following format. 

#include <stdio.h>

int main()
{
    int distanceInMeters, kilometers, remainingMeters;

    // Input distance in meters from the user
    printf("Enter distance in meters: ");
    scanf("%d", &distanceInMeters);

    // Calculate kilometers and remaining meters
    kilometers = distanceInMeters / 1000;
    remainingMeters = distanceInMeters % 1000;

    // Display the results
    printf("%d meter = %d Km and %d meters\n", distanceInMeters, kilometers, remainingMeters);

    return 0;
}