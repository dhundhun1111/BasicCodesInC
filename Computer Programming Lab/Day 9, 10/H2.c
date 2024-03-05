//Author: dhundhun1111
//Date: 05-03-2024

/* Q H2. WAP to print the following pattern 
A 
B A 
C B A 
D C B A 
E D C B A  
*/

#include <stdio.h>

int main() {
    int rows;

    // Input the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the pattern
    for (int i = 0; i < rows; ++i) {
        char currentChar = 'A' + i;
        for (int j = 0; j <= i; ++j) {
            printf("%c ", currentChar);
            --currentChar;
        }
        printf("\n");
    }

    return 0;
}