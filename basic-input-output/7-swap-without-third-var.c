/* Write a program to swap or interchange the contents of two integer variables, without using a third variable. */

#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the two numbers: ");
    scanf("%d %d", &x, &y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("Swapped numbers: %d %d\n", x, y);
    return 0;
}
