//Author: dhundhun1111
//Date: 05-03-2024

//Q1. WAP to display the array elements in ascending order.

#include <stdio.h>

// Function to perform Bubble Sort and arrange array elements in ascending order
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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

    // Perform Bubble Sort to arrange the array elements in ascending order
    bubbleSort(arr, n);

    // Print the sorted array
    printf("Array in ascending order:\n");
    printArray(arr, n);

    return 0;
}