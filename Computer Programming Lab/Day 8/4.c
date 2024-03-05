//Author: dhundhun1111
//Date: 05-03-2024

//Q4. The first few numbers of the Lucas sequence which is a variation on the Fibonacci sequence are: 1  3  4  7  11  18  29  … WAP to generate the Lucas sequence.

#include <stdio.h>

int main()
{
    int n;
    int firstTerm = 1, secondTerm = 3, nextTerm;

    // Input the number of terms from the user
    printf("Enter the number of terms in the Lucas sequence: ");
    scanf("%d", &n);

    // Print the Lucas sequence
    printf("Lucas sequence up to %d terms:\n", n);

    for (int i = 1; i <= n; ++i) {
        printf("%d, ", firstTerm);
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    printf("\n");
    
    return 0;
}