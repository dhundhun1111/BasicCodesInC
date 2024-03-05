//Author: dhundhun1111
//Date: 05-03-2024

/*Q5. WAP to print the following pattern 
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5   
*/

#include <stdio.h>

int main() {
    int rows;

    // Input the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the pattern
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
