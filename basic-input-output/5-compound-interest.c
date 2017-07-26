/* Write a program which takes the principal amount, rate of interest and number of years and calculates the amount after the
entered number of years if the principal amount is compounded quarterly at the entered rate of interest for the entered time. */

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, amount;
    int years;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the number of years: ");
    scanf("%f", &years);

    amount = principal * pow((1+rate/100), 4*t);
    printf("Amount = %f\n", amount);

    return 0;
}
