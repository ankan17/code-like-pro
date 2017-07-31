/* Write a program to check if a user-entered number is Palindrome */

#include <stdio.h>

int main() {
    
    /* rev will hold the reverse of the number while temp will hold
    num for temporary purposes, i.e., calculating the reverse of num */
    int num, temp, rev=0;

    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    /* Calculate the reverse of num and store it in rev */
    while (temp) {
        rev = (rev*10) + (temp%10);
        temp /= 10;
    }

    /* If the number and its reverse are equal, the number is palindrome */
    if (num == rev)
        printf("You got a palindromic number pal!\n");
    else
        printf("Sorry mate! %d is not palindromic\n", num);

    return 0;
}
