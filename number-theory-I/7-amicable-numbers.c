/* Write a program to check if two user-given numbers form an Amicable number pair */

#include <stdio.h>

int main() {
    
    /* num1 and num2 will hold the numbers and sum1 and sum2 will
    hold the sum of factors of num1 and num2 respectively */
    int num1, num2, i=1, sum1=0, sum2=0;
    printf("Enter a pair of numbers: ");
    scanf("%d %d", &num1, &num2);

    /* There are no proper factors beyond half of the number. So, we
    continue checking till either of num1/2 or num2/2  divides i */
    while (((num1/2)/i) || ((num2/2)/i)) {

        // If i divides num1, add i to sum1
		if (num1%i == 0)
		    sum1 += i;

        // If i divides num1, add i to sum1
  		if (num2%i == 0)
  		    sum2 += i;

        // Don't forget to increment i
        i++;
	}

    if ((num1 == sum2) && (num2 == sum1))
        printf("Yeah! %d and %d are Amicable numbers\n", num1, num2);
    else
        printf("You got it wrong pal! No amicable numbers here!\n");

	return 0;
}
