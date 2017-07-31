/* Write a program to print the n-th number of the Fibonacci Series, where n will be provided by the user */

#include <stdio.h>

int main() {
    
    /* We need to provide the first two fibonacci numbers, which are 0 and 1 */
    int a=0, b=1;
    int n, i, temp;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    /* Fib(n) is the function for nth Fibonacci number. There can be 3 cases: */
    switch (n) {

        /* Print 0 as the 1st Fibonacci number */
        case 1:
            printf("Fib(1) = 0\n");
            break;

        /* Print 1 as the 2nd Fibonacci number */
        case 2:
            printf("Fib(2) = 1\n");
            break;

        /* Otherwise calculate the nth Fibonacci number */
        default :
            if (n > 2) {
                for (i=2;i<n;i++) {
                    temp = a+b;
                    a = b;
                    b = temp;
                }
                printf("Fib(%d) = %d\n", n, b);
            }
            else
                printf("You were asked to enter a positive integer!\n");
    }

    return 0;
}
