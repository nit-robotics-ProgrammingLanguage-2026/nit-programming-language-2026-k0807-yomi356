#include <stdio.h>
#include <math.h>

void to_polar(double x, double y, double *r, double *theta);

int main(void)
{
    double x, y;
    double r, theta;

    scanf("%lf %lf", &x, &y);

    to_polar(x, y, &r, &theta);

    printf("%.3f,%.2f\n", r, theta);

    return 0;
}

void to_polar(double x, double y, double *r, double *theta)
{
    *r = sqrt(x * x + y * y);

    *theta = atan(y / x) * 180.0 / M_PI;
}