//Author: dhundhun1111
//Date: 05-03-2024

//Q H2. WAP to Count the total number of duplicate elements in an array.

#include <stdio.h>

int main() {
    int n, searchElement;

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

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    // Search for the element in the array
    int found = 0; // Flag to track whether the element is found
    int duplicateCount = 0; // Counter for duplicate elements

    for (int i = 0; i < n; ++i) {
        if (arr[i] == searchElement) {
            found = 1;
            duplicateCount++;
        }
    }

    // Display the search result
    if (found) {
        printf("Element %d found in the array.\n", searchElement);
        printf("Total number of duplicates: %d\n", duplicateCount - 1); // Exclude the original occurrence
    } else {
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0;
}