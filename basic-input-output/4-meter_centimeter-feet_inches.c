/* Write a program which takes two integers as input, which denote meters
and centimeters, and converts this distance into feet and inches. */

#include <stdio.h>

int main() {
    int m, cm, feet;
    float inch;
    printf("Enter length as m cm: ");
    scanf("%d %d", &m, &cm);

    /* 1 Inch = 2.54 Centimeters and 12 Inches = 1 Foot */
    feet = ((m*100+cm)*100/254)/12;
    inch = (m*100+cm)/2.54 – 12*feet;

    printf("Feet: %d, Inches: %.2f\n", feet, inch);
    return 0;
}
