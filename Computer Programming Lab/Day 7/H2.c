//Author: dhundhun1111
//Date: 05-03-2024

//Q H2. WAP to test whether a number is Armstrong Number or not. (A number is said to be Armstrong when the sum of cubes of its digit is equal with the original number. Ex-153) 

#include <math.h>
#include <stdio.h>

int main() {
   int num, originalNum, remainder;
   float result = 0.0;

   printf("Enter an integer: ");
   scanf("%d", &num);

   originalNum = num;

   for (originalNum = num; originalNum != 0; originalNum /= 10) {
       remainder = originalNum % 10;

      // store the sum of the power of individual digits in result
      result += pow(remainder, 3);
   }

   // if num is equal to result, the number is an Armstrong number
   if ((int)result == num)
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
    return 0;
}