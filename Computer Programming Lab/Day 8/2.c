//Author: dhundhun1111
//Date: 05-03-2024

//Q2. WAP to test whether a number is Perfect Number or not. (A number is said to be Perfect when the sum of factors excluding the number itself is equal to the original number. Ex-6 => 1 + 2 + 3 = 6. So, 6 is a Perfect number.) 

#include <stdio.h>

int main()
{
    int number, sum = 0;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check for factors and calculate their sum
    for (int i = 1; i <= number / 2; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }

    // Check if the number is a Perfect Number
    if (sum == number) {
        printf("%d is a Perfect Number.\n", number);
    } else {
        printf("%d is not a Perfect Number.\n", number);
    }
    return 0;
}