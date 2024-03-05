//Author: dhundhun1111
//Date: 05-03-2024

//Q H2. WAP to determine the eligibility for admission based on the following criteria:   Eligibility Criteria:  Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and  Total in all three subjects >=190 or Total in Maths and Physics >=140

#include <stdio.h>

int main()
{
    int mathsM, physicsM, chemM;
    int totalM;

    // Input marks in Maths, Physics, and Chemistry from the user
    printf("Enter marks in Maths: ");
    scanf("%d", &mathsM);

    printf("Enter marks in Physics: ");
    scanf("%d", &physicsM);

    printf("Enter marks in Chemistry: ");
    scanf("%d", &chemM);

    // Calculate total marks
    totalM = mathsM + physicsM + chemM;

    // Check eligibility based on the criteria
    if ((mathsM >= 65 && physicsM >= 55 && chemM >= 50 && totalM >= 190) ||
        (mathsM + physicsM >= 140)) {
        printf("Eligible for admission.\n");
    } else {
        printf("Not eligible for admission.\n");
    }

    return 0;
}