//Author: dhundhun1111
//Date: 05-03-2024

//Q H1. WAP to search an element in an 1-D array.

#include <stdio.h>

int main() {
    int n, element;

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

    // Input the element to be searched
    printf("Enter the element to search: ");
    scanf("%d", &element);

    // Search for the element in the array
    int found = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == element) {
            found = 1;
            printf("Element %d found at index %d.\n", element, i);
            break;
        }
    }

    // If the element is not found
    if (!found) {
        printf("Element %d not found in the array.\n", element);
    }

    return 0;
}