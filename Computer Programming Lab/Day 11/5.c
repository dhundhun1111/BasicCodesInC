//Author: dhundhun1111
//Date: 05-03-2024

//Q5. WAP to insert an element in an 1-D array.

#include <stdio.h>

int main() {
    int n, position, element;

    // Input the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare an array of size N+1 to accommodate the inserted element
    int arr[n + 1];

    // Input the elements of the array
    printf("Enter %d integers for the array:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    // Input the position to insert the element
    printf("Enter the position to insert the element (1 to %d): ", n + 1);
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 1 || position > n + 1) {
        printf("Invalid position. Insertion failed.\n");
        return 0;
    }

    // Input the element to be inserted
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    // Shift elements to make space for the new element
    for (int i = n; i >= position; --i) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at the specified position
    arr[position - 1] = element;

    // Display the updated array
    printf("Array after insertion:\n");
    for (int i = 0; i < n + 1; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}