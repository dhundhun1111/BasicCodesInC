//Author: dhundhun1111
//Date: 05-03-2024

/* Q H3. Write a C program to print a hollow square pattern using a while loop. For row=4 
* * * * 
*     * 
*     * 
* * * * 
*/

#include <stdio.h>

int main() {
    int rows;

    // Input the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    int i = 1;
    while (i <= rows) {
        int j = 1;
        while (j <= rows) {
            if (i == 1 || i == rows || j == 1 || j == rows) {
                printf("* ");
            } else {
                printf("  ");
            }
            ++j;
        }
        printf("\n");
        ++i;
    }

    return 0;
}
