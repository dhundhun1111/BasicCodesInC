//Author: dhundhun1111
//Date: 05-03-2024

/* Q3. WAP to print the following pattern for rows = 4 
1 1 1 1 
2 2 2 2 
3 3 3 3
4 4 4 4 
*/

#include <stdio.h>

int main() {
    int rows;

    // Input the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the pattern
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows; ++j) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}