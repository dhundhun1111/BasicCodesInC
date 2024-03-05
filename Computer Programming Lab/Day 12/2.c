//Author: dhundhun1111
//Date: 05-03-2024

//Q2. WAP to Print all unique elements of an array. 

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

    // Print unique elements
    printf("Unique elements of the array:\n");
    for (int i = 0; i < n; ++i) {
        int j;
        for (j = 0; j < i; ++j) {
            if (arr[i] == arr[j]) {
                break; // If duplicate found, exit inner loop
            }
        }

        // If no duplicate found, print the unique element
        if (i == j) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    return 0;
}