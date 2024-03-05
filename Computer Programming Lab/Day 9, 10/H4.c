//Author: dhundhun1111
//Date: 05-03-2024

/* Q H4. WAP to print the following pattern 
********* 
 *******
  *****
   ***
    * 
*/

#include <stdio.h>

int main() {
    int rows;

    // Input the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the pattern
    for (int i = 0; i < rows; ++i) {
        // Print spaces
        for (int space = 0; space < i; ++space) {
            printf(" ");
        }

        // Print asterisks
        for (int j = 0; j < 2 * (rows - i) - 1; ++j) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}