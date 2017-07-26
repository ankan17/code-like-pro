/* Write a program which takes a Fahrenheit temperature as input and prints the equivalent Celsius temperature. */

#include <stdio.h>

int main() {
    float fah, cel;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fah);

    /* T(°C) = (T(°F) - 32) × 5/9 */
    cel = (fah-32)*5/9;

    printf("%.2f\n", cel);
    return 0;
}
