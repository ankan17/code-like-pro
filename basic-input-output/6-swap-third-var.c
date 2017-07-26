/* Write a program to swap or interchange the contents of two integer variables, using a third variable. */

#include <stdio.h>

int main() {
    int x, y, temp;
    printf("Enter the two numbers: ");
    scanf("%d %d", &x, &y);

    temp = x;
    x = y;
    y = temp;

    printf("Swapped numbers: %d %d\n", x, y);
    return 0;
}
