//Author: dhundhun1111
//Date: 05-03-2024

//Q H2. Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.

#include <stdio.h>

// Function to find the majority element in an array
int findMajorityElement(int arr[], int n) {
    int candidate = arr[0];
    int count = 1;

    // Find a potential candidate for the majority element
    for (int i = 1; i < n; ++i) {
        if (arr[i] == candidate) {
            ++count;
        } else {
            --count;
        }

        if (count == 0) {
            candidate = arr[i];
            count = 1;
        }
    }

    // Verify if the candidate is a majority element
    count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == candidate) {
            ++count;
        }
    }

    if (count > n / 2) {
        return candidate;
    } else {
        return -1; // No majority element found
    }
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

    // Find the majority element in the array
    int majorityElement = findMajorityElement(arr, n);

    if (majorityElement != -1) {
        printf("Majority element is: %d\n", majorityElement);
    } else {
        printf("No majority element found.\n");
    }

    return 0;
}