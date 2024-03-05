// Author: dhundhun1111
// Date : 04-03-2024

// Q H3.WAP to convert given paisa into its equivalent rupee and paisa as per the following format.

#include <stdio.h>

int main()
{
    int totalPaisa, rupees, remainingPaisa;

    // Input total paisa from the user
    printf("Enter total paisa: ");
    scanf("%d", &totalPaisa);

    // Calculate rupees and remaining paisa
    rupees = totalPaisa / 100; // / is diviion operator
    remainingPaisa = totalPaisa % 100; // % is modulo operator

    // Display the results
    printf("%d paisa = %d Rupee and %d paisa", totalPaisa, rupees, remainingPaisa);

    return 0;
}