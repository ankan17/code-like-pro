/* Write a program to check if a number is prime or not */

#include <stdio.h>
#include <math.h>

int main() {

    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 1)
        printf("1 is neither prime nor composite\n");
    else {
        
        /* We start from num=2, and while incrementing num, we go on checking if num is prime
        or not. The maximum limit for i is the square root of the num, figure out why! */
        for (i=2;i<=(int)sqrt(num);i++) {

            /* Break the loop if num divides i */
            if (num%i == 0)
                break;
        }

        /* This will only be true if the above loop completes, and if
        that happens that means we have our prime number */
        if (i > (int)sqrt(num))
            printf("Yuppp! %d is a prime number!\n", num);
        else
            printf("Noopsy! %d is not a prime number\n", num);
    }

    return 0;
}
