/* Risabh's basic salary is given as input through the keyboard. His dearness allowance is 25% of basic salary,house rent
allowance is 15% of basic salary and provident fund is 7.5% of basic salary. Write a program to calculate his gross salary. */

#include <stdio.h>

int main() {
    float basic_sal, gross_sal;
    printf("Enter basic salary: ");
    scanf("%f", &basic_sal);

    /* Gross Salary = Dearness Allowance + House Rent Allowance - Provident Fund */
    gross_sal = basic_sal + (25+15-7.5)/100*basic_sal;

    printf("Gross salary: %f\n", gross_sal);
    return 0;
}
