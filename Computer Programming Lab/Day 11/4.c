//Author: dhundhun1111
//Date: 05-03-2024

//Q4. WAP to find largest element stored in an array.

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

    // Find the largest element in the array
    int largest = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Display the largest element
    printf("Largest element in the array: %d\n", largest);

    return 0;
}