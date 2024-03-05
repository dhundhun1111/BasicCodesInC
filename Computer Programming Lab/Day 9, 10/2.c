//Author: dhundhun1111
//Date: 05-03-2024

//Q2. WAP to find out sum of series up to n terms 1 + sqrt2 +sqrt3 + sqrt4 + ... +sqrt n

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double sum = 0.0;

    // Input the number of terms from the user
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; ++i) {
        sum += sqrt(i);
    }

    // Print the sum of the series
    printf("Sum of the series up to %d terms: %lf\n", n, sum);

    return 0;
}
