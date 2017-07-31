/* Write a program to print the n-th prime number, without using array, where n will be provided by the user */

#include <stdio.h>
#include <math.h>

int main() {

    int n, i, count=0, num=2;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    /* Infinite while loop; we'll break the loop when we have counted upto n prime numbers */
    while (1) {

        /* We start from num=2, and while incrementing num, we go on checking if num is prime
        or not. The maximum limit for i is the square root of the num, figure out why! */
        for (i=2;i<=(int)sqrt(num);i++) {

            /* Break the loop if num divides i */
            if (num%i == 0)
                break;
        }

        /* This will only be true if the above loop completes, and if
        that happens that means we have our prime number */
        if (i > (int)sqrt(num)) {

            /* Increment count and check if it is equal to n. If true,
            print the value and break from the infinite while loop */
            if (++count == n) {
                
                printf("The prime number you want is %d\n", num);
                break;
            }
        }

        /* Go on to next num, if it is not the required nth prime number */
        num++;
    }

    return 0;
}
