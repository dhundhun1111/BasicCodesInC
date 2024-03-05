//Author: dhundhun1111
//Date: 05-03-2024

//Q H3. Given an array of integers arr[] of size N and an integer d, the task is to rotate the array elements to the left by d positions.

#include <stdio.h>

// Function to rotate array elements to the left by d positions
void leftRotateArray(int arr[], int n, int d) {
    // Create a temporary array to store the first d elements
    int temp[d];
    
    // Copy the first d elements to the temporary array
    for (int i = 0; i < d; ++i) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the left by d positions
    for (int i = d; i < n; ++i) {
        arr[i - d] = arr[i];
    }

    // Copy the elements from the temporary array to the end of the modified array
    for (int i = 0; i < d; ++i) {
        arr[n - d + i] = temp[i];
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, d;

    // Input the size of the array and the value of d from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of d: ");
    scanf("%d", &d);

    // Rotate the array to the left by d positions
    leftRotateArray(arr, n, d);

    // Print the rotated array
    printf("Array after left rotation by %d positions:\n", d);
    printArray(arr, n);

    return 0;
}