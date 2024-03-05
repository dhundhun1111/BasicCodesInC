//Author: dhundhun1111
//Date: 05-03-2024

//Q2. WAP to read an alphabet from the user and convert it into uppercase if the entered alphabet is  in lowercase, otherwise display an appropriate message. 

#include <stdio.h>

int main()
{
    char alph;

    // Input an alphabet from the user
    printf("Enter an alph: ");
    scanf(" %c", &alph);

    // Check if the entered alphabet is in lowercase
    if (alph >= 97 && alph <= 122) {
        // Convert to uppercase
        alph = alph - 32;
        printf("Uppercase of the entered letter : %c\n", alph);
    } else {
        // Display a message if the entered alphabet is not in lowercase
        printf("The entered letter %c is already in Uppercase.\n", alph);
    }

    return 0;
}