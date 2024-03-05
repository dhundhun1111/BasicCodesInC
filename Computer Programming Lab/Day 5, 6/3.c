//Author: dhundhun1111
//Date: 05-03-2024

//Q3. WAP to read a character from the user and test whether it is a vowel or consonant or not an alphabet.  

#include <stdio.h>

int main()
{
    char ch;

    // Input a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the entered character is an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Check if the alphabet is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("%c is not an alphabet.\n", ch);
    }
    
    return 0;
}