/* Write a program to calculate the sum of the series: 1+2+4+8+...+2^n,
where n is entered by the user, without using iteration or recursion. */

#include <stdio.h>
#include <math.h>

int main() {
    int n, sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum = (int)pow(2, n+1) - 1;

    printf("Sum of series is %d\n", sum);
    return 0;
}
