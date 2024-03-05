//Author: dhundhun1111
//Date: 05-03-2024

//Q1. WAP to print even series within 50

#include <stdio.h>

int main()
{
    printf("Even numbers within 50:\n");

    for (int i = 2; i <= 50; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}