//Author: dhundhun1111
//Date: 05-03-2024

/* Q6. WAP to print the following pattern 1 3 7 15 31…… */

#include <stdio.h>

int main() {
    int terms;

    // Input the number of terms from the user
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    // Print the pattern
    int currentTerm = 1;
    for (int i = 1; i <= terms; ++i) {
        printf("%d ", currentTerm);
        currentTerm = 2 * currentTerm + 1;
    }

    printf("\n");

    return 0;
}