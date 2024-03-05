//Author: dhundhun1111
//Date: 05-03-2024

//Q1. WAP to print Fibonacci series up to n terms.

#include <stdio.h>

int main()
{
    int n, firstTerm = 0, secondTerm = 1, nextTerm;

    // Input the number of terms from the user
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    // Print the Fibonacci series
    printf("Fibonacci series up to %d terms:\n", n);

    for (int i = 1; i <= n; ++i) {
        printf("%d, ", firstTerm);
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    printf("\n");
    
    return 0;
}