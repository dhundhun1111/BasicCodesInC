//Author: dhundhun1111
//Date: 05-03-2024

//Q H1. Given an integer array, find the peak element in it. A peak element is an element that is greater than its neighbours. There might be multiple peak elements in an array, and the solution should report any peak element.

#include <stdio.h>

// Function to find a peak element in an array
int findPeakElement(int arr[], int low, int high, int n) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if the middle element is a peak
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid])) {
            return arr[mid];
        }

        // If the element to the right is greater, search in the right half
        if (mid < n - 1 && arr[mid] < arr[mid + 1]) {
            low = mid + 1;
        } else {
            // Otherwise, search in the left half
            high = mid - 1;
        }
    }

    return -1; // No peak element found
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

    // Find a peak element in the array
    int peakElement = findPeakElement(arr, 0, n - 1, n);

    if (peakElement != -1) {
        printf("A peak element is: %d\n", peakElement);
    } else {
        printf("No peak element found.\n");
    }

    return 0;
}