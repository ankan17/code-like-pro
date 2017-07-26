/* Write a program to receive Cartesian coordinates (x,y) of a point and convert them to polar coordinates (r,φ). */

#include <stdio.h>
#include <math.h>

int main() {
	float x, y, r, phi;
    printf("Enter cartesian coordinates as x y: ");
    scanf("%f %f", &x, &y);
    r = sqrt(x*x + y*y);

    /* atan2 returns the principal arc tangent of y/x,
       in the interval [-pi,+pi] radians */
    phi = atan2(y, x);

    printf("r = %.2f units, phi = %.2f radians\n", r, phi);
    return 0;
}
