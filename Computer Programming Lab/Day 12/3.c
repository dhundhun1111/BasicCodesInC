//Author: dhundhun1111
//Date: 05-03-2024

//Q3. WAP to print all the even and odd numbers in a 1-D array.

#include <stdio.h>

int main() {
    int n;

    // Input the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    // Print even numbers
    printf("Even numbers in the array:\n");
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    // Print odd numbers
    printf("Odd numbers in the array:\n");
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}