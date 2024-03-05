//Author: dhundhun1111
//Date: 05-03-2024

//Q5. The buying price, the marker price and discount are entered through keyboard. Sometimes seller gets profit or sometimes loss depending upon the discount. WAP to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred. (Note: Use conditional operator (? :) to decide whether the seller has made a loss or profit.) 

#include <stdio.h>

int main()
{
    float bp, mp, discount, sp, profitLoss;

    // Input buying price, market price, and discount from the user
    printf("Enter buying price: ");
    scanf("%f", &bp);

    printf("Enter market price: ");
    scanf("%f", &mp);

    printf("Enter discount: ");
    scanf("%f", &discount);

    // Calculate the selling price after applying discount
    sp = mp - (mp * (discount / 100));

    // Determine profit or loss using conditional operator
    profitLoss = sp > bp ? ((sp - bp)/bp)*100 : ((bp - sp)/bp)*100;

    // Display the result
    if (sp > bp) {
        printf("\nThe seller has made a profit of %.2f %c.\n", profitLoss,'%');
    } else if (sp < bp) {
        printf("\nThe seller has incurred a loss of %.2f %c.\n", profitLoss, '%');
    } else {
        printf("\nThe seller has neither made a profit nor incurred a loss.\n");
    }
    return 0;
}