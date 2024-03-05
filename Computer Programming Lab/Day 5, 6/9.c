//Author: dhundhun1111
//Date: 05-03-2024

//Q9. WAP to display the grade system of KIIT University based on total marks secured by a  student in a semester. (Use else..if ladder statement.) 

#include <stdio.h>

int main()
{
    int totalMarks;

    // Input total marks from the user
    printf("Enter total marks: ");
    scanf("%d", &totalMarks);

    // Determine the grade based on total marks using else-if ladder
    if (totalMarks >= 90 && totalMarks <= 100) {
        printf("Grade: O\n");
    } else if (totalMarks >= 80 && totalMarks <= 89) {
        printf("Grade: E\n");
    } else if (totalMarks >= 70 && totalMarks <= 79) {
        printf("Grade: A\n");
    } else if (totalMarks >= 60 && totalMarks <= 69) {
        printf("Grade: B\n");
    } else if (totalMarks >= 50 && totalMarks <= 59) {
        printf("Grade: C\n");
    } else if (totalMarks >= 40 && totalMarks <= 49) {
        printf("Grade: D\n");
    } else if (totalMarks < 40) {
        printf("Grade: F\n");
    } else {
        printf("Invalid total marks.\n");
    }
    
    return 0;
}