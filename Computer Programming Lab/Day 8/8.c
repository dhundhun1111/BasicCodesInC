//Author: dhundhun1111
//Date: 05-03-2024

//Q8. WAP to display this series (3 in a single loop). 0 1 1 2 4 7 13 24 44 

#include <stdio.h>

int main() {
    int n, i;
    int a[10];

    // Input the number of terms from the user
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    // Initialize the first few terms
    a[0] = 0;
    a[1] = 1;
    a[2] = 1;

    // Generate and print the series
    printf("Series up to %d terms:\n", n);

    for (i = 3; i < n; ++i) {
        a[i] = a[i - 1] + a[i - 2] + a[i - 3];
    }

    for (i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}
