/* Write a program to print the prime factors of a number N, where N will be provided by the user */

#include <stdio.h>
#include <math.h>

int main() {

    /* flag is only for formatting purposes, you'll see */
    int N, i, num, flag=0;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    /* 2 can be the smallest prime factor and N itself can be the
    largest, this explains why we are checking from 2 to N */
    for (num=2;num<=N;num++) {

        /* If num is actually a factor of N */
        if (N%num == 0) {

            /* Check if num is prime */
            for (i=2;i<=(int)sqrt(num);i++) {
                if (num%i == 0)
                    break;
            }

            /* If num is actually a prime factor */
            if (i > (int)sqrt(num)) {

                /* Check if any factors have been printed before (if not, flag will
                be 0). If flag is 0, print the message and change flag to 1*/
                if (flag == 0) {
                    printf("The prime factor(s) of %d is(are) %d ", N, num);
                    flag = 1;
                }
                /* flag = 1 means the message has been printed already, only print the factor */
                else
                    printf("%d ", num);
            }
        }
    }

    printf("\n");
    return 0;
}
