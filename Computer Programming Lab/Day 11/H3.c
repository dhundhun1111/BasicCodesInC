//Author: dhundhun1111
//Date: 05-03-2024

//Q H3. WAP to find out the multiplication of the numbers stored in an array of integers.

#include <stdio.h>

int main() {
    int n;

    // Input the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare an array of size N
    int arr[n];

    // Input the elements of the array
    printf("Enter %d integers for the array:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    // Calculate the multiplication of array elements
    long long int multiplication = 1;

    for (int i = 0; i < n; ++i) {
        multiplication *= arr[i];
    }

    // Display the multiplication result
    printf("Multiplication of array elements: %lld\n", multiplication);

    return 0;
}