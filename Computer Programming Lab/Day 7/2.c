//Author: dhundhun1111
//Date: 05-03-2024

//Q2. WAP to print the natural numbers from 1 to n (value of n is user input).

#include <stdio.h>

int main()
{
    int n;

    // Input the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Print natural numbers from 1 to n
    printf("Natural numbers from 1 to %d:\n", n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
    
    return 0;
}