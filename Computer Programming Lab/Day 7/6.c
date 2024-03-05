//Author: dhundhun1111
//Date: 05-03-2024

//Q6. WAP to find out reverse of a number.

#include <stdio.h>

int main()
{
    int num, revNum = 0, rem;

    // Input a num from the user
    printf("Enter a num: ");
    scanf("%d", &num);

    // Find the reverse of the num
    while (num != 0) {
        rem = num % 10;
        revNum = revNum * 10 + rem;
        num /= 10;
    }

    // Print the reverse of the num
    printf("Reverse of the num: %d\n", revNum);

    return 0;
}