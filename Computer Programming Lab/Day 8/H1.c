//Author: dhundhun1111
//Date: 05-03-2024

//Q H1. WAP to sum the following series S=1+(1+2)+(1+2+3)+...+(1+2+3+...+n) 

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; ++i) {
        int innerSum = 0;
        for (int j = 1; j <= i; ++j) {
            innerSum += j;
        }
        sum += innerSum;
    }

    // Print the sum of the series
    printf("Sum of the series: %d\n", sum);

    return 0;
}
