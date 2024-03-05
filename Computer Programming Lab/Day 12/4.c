//Author: dhundhun1111
//Date: 05-03-2024

//Q4. WAP to reverse the array elements.

#include <stdio.h>

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

    // Reverse the array elements
    int start = 0;
    int end = n - 1;
    while (start < end) {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move indices towards the center
        ++start;
        --end;
    }

    // Print the reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}