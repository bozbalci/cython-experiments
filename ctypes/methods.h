// methods.c: contains functions for calculating definite integrals

#ifndef METHODS_H
#define METHODS_H

typedef double (*real_func)(double x);

double
trapezoid(void *f, int intervals, double start, double end)
{
    int n;
    double dx, sum, x;

    sum = 0;
    dx = (end - start) / (intervals - 1);

    // Sum the midpoints
    for (n = 2; n < intervals; n++)
    {
        x = dx * (n - 1);
        sum += (*f)(x) * dx;
    }

    // Sum the endpoints
    sum += 0.5 * ((*f)(start) + (*f)(end)) * dx;

    return sum;
}

double
simpson(real_func f, int intervals, double start, double end)
{
    int n;
    double dx, sum, x;

    sum = 0;
    dx = (end - start) / (intervals - 1);

    for (n = 2; n < intervals; n++)
    {
        x = dx * (n - 1);

        // Odd indexed intervals have a multiplier of 4 whereas
        // even indexed intervals have 2.
        sum += (n % 2 == 0 ? 4 : 2) * (*f)(x);
    }

    sum += (*f)(start) + (*f)(end);
    sum *= dx / 3;

    return sum;
}

#endif // METHODS_H
