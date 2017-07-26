/* If the lengths of 3 sides of a triangle are provided as input, write a program to find the three angles of the triangle. */

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, A, B, C;
    // a,b, c are the sides and A, B, C are the angles

    printf("Enter the three sides of triangle: ");
    scanf("%f %f %f",&a,&b,&c);

    // acos(x) returns principal arc cosine of x in radians
    /* We can use the cosine formula to get the angles, and
       convert it to degrees */
    A = acos((b*b+c*c-a*a)/(2*b*c))*180/3.14;
    B = acos((a*a+c*c-b*b)/(2*a*c))*180/3.14;
    C = acos((b*b-c*c+a*a)/(2*b*a))*180/3.14;

    printf("The three angles are %f %f and %f\n", A, B, C);
    return 0;
}
