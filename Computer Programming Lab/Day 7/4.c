//Author: dhundhun1111
//Date: 05-03-2024

//Q4. WAP to take 10 different numbers as input. Print their sum and average.

#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter 10 different numbers:\n");

    // Input 10 different numbers
    for (int i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    // Calculate average
    float average = (float)sum / 10;

    // Print sum and average
    printf("\nSum of the numbers: %d\n", sum);
    printf("Average of the numbers: %.2f\n", average);
    
    return 0;
}