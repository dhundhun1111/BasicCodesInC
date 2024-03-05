//Author: dhundhun1111
//Date: 05-03-2024

//Q5. Given an array arr[] of nonnegative integers and an integer sum, find a subarray that adds to a given sum.

#include <stdio.h>

// Function to find subarray with a given sum
int findSubarrayWithSum(int arr[], int n, int sum) {
    int start = 0;
    int currentSum = arr[0];

    for (int end = 1; end <= n; ++end) {
        while (currentSum > sum && start < end - 1) {
            currentSum -= arr[start];
            ++start;
        }

        if (currentSum == sum) {
            printf("Subarray with sum %d found between indices %d and %d\n", sum, start, end - 1);
            return 1;
        }

        if (end < n) {
            currentSum += arr[end];
        }
    }

    printf("No subarray found with sum %d\n", sum);
    return 0;
}

int main() {
    int n, sum;

    // Input the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    // Input the sum to find
    printf("Enter the sum to find: ");
    scanf("%d", &sum);

    // Find subarray with the given sum
    findSubarrayWithSum(arr, n, sum);

    return 0;
}