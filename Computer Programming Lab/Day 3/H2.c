//Author: dhundhun1111
//Date : 04-03-2024

//Q H2.WAP to find the average mark of 5 subjects of a student and find the percentage. Assume full mark of each subject is 200. All the input must be given by user. 

#include <stdio.h>

int main()
{
    int subject1, subject2, subject3, subject4, subject5;
    float average, percentage, totalMarks;

    // Input marks for each subject from the user
    printf("Enter marks for Subject 1 (out of 200): ");
    scanf("%d", &subject1);

    printf("Enter marks for Subject 2 (out of 200): ");
    scanf("%d", &subject2);

    printf("Enter marks for Subject 3 (out of 200): ");
    scanf("%d", &subject3);

    printf("Enter marks for Subject 4 (out of 200): ");
    scanf("%d", &subject4);

    printf("Enter marks for Subject 5 (out of 200): ");
    scanf("%d", &subject5);

    // Calculate total marks
    totalMarks = subject1 + subject2 + subject3 + subject4 + subject5;

    // Calculate average marks
    average = totalMarks / 5;

    // Calculate percentage
    percentage = (totalMarks / (5 * 200)) * 100;

    // Display the results
    printf("\nAverage marks: %.0f\n", average);
    printf("Percentage: %.0f%%\n", percentage);

    return 0;
}