//Author: dhundhun1111
//Date: 05-03-2024

//Q3. WAP to find the average of N numbers using arrays. 

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

    // Calculate the sum of array elements
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    // Calculate the average
    float average = (float)sum / n;

    // Display the average
    printf("Average of array elements: %.2f\n", average);

    return 0;
}