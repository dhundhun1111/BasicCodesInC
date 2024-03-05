//Author: dhundhun1111
//Date: 05-03-2024

//Q H3. WAP to test whether a num is Palindrome Number or not. (A num is said to be Palindrome when its reverse is equal with the original num. Ex-121)

#include <stdio.h>

int main()
{
    int num, ogNum, revNum = 0, remainder;

    // Input a num from the user
    printf("Enter a num: ");
    scanf("%d", &num);

    // Store the original num
    ogNum = num;

    // Reverse the num
    while (num != 0) {
        remainder = num % 10;
        revNum = revNum * 10 + remainder;
        num /= 10;
    }

    // Check if the num is a Palindrome num
    if (ogNum == revNum) {
        printf("%d is a Palindrome num.\n", ogNum);
    } else {
        printf("%d is not a Palindrome num.\n", ogNum);
    }
    return 0;
}