/* Write a program to calculate the sum of the series: 1+2+3+4+...+n,
where n is entered by the user, without using iteration or recursion. */

#include <stdio.h>

int main() {
    int n, sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum = n*(n+1)/2;

    printf("Sum of series is %d\n", sum);
    return 0;
}
