//Author: dhundhun1111
//Date: 05-03-2024

//Q H5. WAP to delete an element at desired position from an array.

#include <stdio.h>

int main() {
    int n, position;

    // Input the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Check if the array size is valid
    if (n <= 0) {
        printf("Invalid array size.\n");
        return 0;
    }

    // Declare an array of size N
    int arr[n];

    // Input the elements of the array
    printf("Enter %d integers for the array:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    // Input the position to delete the element
    printf("Enter the position to delete the element (1 to %d): ", n);
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 1 || position > n) {
        printf("Invalid position. Deletion failed.\n");
        return 0;
    }

    // Shift elements to remove the element at the specified position
    for (int i = position - 1; i < n - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    // Display the updated array
    printf("Array after deletion:\n");
    for (int i = 0; i < n - 1; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}