/* Write a program to check if a user-entered number is Pronic number */

#include <stdio.h>
#include <math.h>

int main() {
    
    int num, k;
    printf("Enter a number: ");
	scanf("%d", &num);

    /* Taking the square root of num roughly gives the idea for getting the
    smaller of two successive factors, if they exist, which is stored in k */
	k = (int)sqrt(num);

    /* Now check if the product of k and (k+1) gives back num */
	if (k*(k+1) == num)
	   printf("You've got a Pronic number there, pal!\n");
	else
	   printf("Nope! That's not a Pronic number!\n");

	return 0;
}
