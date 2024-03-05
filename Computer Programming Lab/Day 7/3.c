//Author: dhundhun1111
//Date: 05-03-2024

//Q3. WAP to print the natural numbers from n to 1(value of n is user input).

#include <stdio.h>

int main()
{
    int n;

    // Input the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Print natural numbers from n to 1
    printf("Natural numbers from %d to 1:\n", n);

    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    printf("\n");
    
    return 0;
}