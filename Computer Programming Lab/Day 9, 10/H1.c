//Author: dhundhun1111
//Date: 05-03-2024

/* Q7. WAP to print the following pattern
     * 
    * *
   * * *
  * * * *
 * * * * *
 */

#include <stdio.h>

int main() {
    int rows;

    // Input the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the pattern
    for (int i = 1; i <= rows; ++i) {
        // Print spaces
        for (int space = 1; space <= rows - i; ++space) {
            printf(" ");
        }

        // Print asterisks
        for (int j = 1; j <= i; ++j) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}