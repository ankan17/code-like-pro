/* Write a program to check if a 15-digit number is a valid IMEI number */

#include <stdio.h>

int main() {
    
    /* Data type for holding the number to be checked for IMEI has to
    be long int on 64-bit compiler, because it is 15 digits long */
    long int num, temp;
	int digits=0, element, sum=0;

    printf("Enter a 15 digit number: ");
	scanf("%ld", &num);

    /* temp will hold the value of num for temporary pursoses i.e., calculations */
    temp = num;

    /* Extract the last digit of temp by % operation and keep
    dividing temp by 10 till the division can continue */
	while (temp) {

        /* For every odd position from the last, element is twice
        the digit extracted, the digit itself otherwise */
		element = (digits%2 == 0)?(temp%10):(2*(temp%10));

        /* Add the digits of element to sum */
        while (element) {
            sum += element%10;
            element /= 10;
        }

        /* Don't forget to divide temp by 10, this brings the loop to an end eventually */
        temp /= 10;

        /* Increase the number of digits as we move along */
        digits++;
	}

    /* If there 15 digits and the sum obtained is divisible by 10, you've got your IMEI number! */
	if (digits == 15 && sum%10 == 0)
	   printf("You got it right, pal! It's a valid IMEI number!\n");
	else
    	printf("Oops! The number you entered is not a valid IMEI number.\n");

	return 0;
}
