/* Write a program to check if a user-given number is Perfect number */

#include <stdio.h>
#include <math.h>

int main() {

    int num, sum=1, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    /* 1 is the factor of every number, so start the loop from 2 and initialize sum to 1 */
    for (i=2;i<=(int)sqrt(num);i++) {

        /* If i is a divisor of num, then num/i is also a
        divisor of num. So, add i and num/i to sum */
        if (num%i == 0) {
            sum += i;
            sum += num/i;
        }
    }

    if (sum == num)
        printf("Yeah! The number you entered is a Perfect number\n");
    else
        printf("This ain't a Perfect number, pal!\n");

    return 0;
}
