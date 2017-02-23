// example.c: example usages of functions defined in methods.h

#include <stdio.h>
#include <math.h>
#include "methods.h"

#define PI 3.141592653589

double square(double x)
{
    return x * x;
}

int main()
{
    double result = trapezoid(&square, 100, 0, 1);
    printf("(Trapezoid) Integral of x^2 from 0 to 1 = %f\n", result);

    result = simpson(&sin, 100, 0, PI);
    printf("(Simpson) Integral of sin(x) from 0 to pi = %f\n", result);

    return 0;
}
