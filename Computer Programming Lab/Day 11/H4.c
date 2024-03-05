//Author: dhundhun1111
//Date: 05-03-2024

//Q H4. WAP to find the second largest element in an array.

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

    // Find the second largest element in the array
    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    // Display the second largest element
    printf("Second largest element in the array: %d\n", secondLargest);

    return 0;
}