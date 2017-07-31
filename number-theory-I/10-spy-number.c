/* Write a program to check if a user-entered number is Spy number */

#include <stdio.h>

int main () {

    /* Initially product should be initialised to 1 and sum to 0 */
    int num, temp, sum=0, prod=1;
	scanf("%d", &num);
    temp = num;

    /* Calculate sum and product of the digits */
	while (temp) {
		sum += temp%10;
		prod *= temp%10;
		temp /= 10;
	}

    /* Check if sum and product come out to be same */
	if (sum == prod)
	   printf("Hush! %d is a Spy number\n", num);
	else
        printf("Naah! No Spy number here, mate!\n");

	return 0;
}
