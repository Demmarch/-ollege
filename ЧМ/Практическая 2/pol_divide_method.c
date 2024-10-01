#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define EPS 0.001

double m_func(double x);
double processing(double a, double b);

int main()
{
    double a;
    double b;
    printf("a = ");
    if (scanf("%lf", &a) != 1)
    {
        printf("Incorrect input\n");
        return 1;
    }
    printf("b = ");
    if (scanf("%lf", &b) != 1)
    {
        printf("Incorrect input\n");
        return 1;
    }
    double x = processing(a, b);
    printf("x - %.3lf\n", x);
}

double m_func(double x)
{
    return sqrt(4 * x + 7) - 3 * cos(x);
}

double processing(double a, double b)
{
    while (b - a > 2 * EPS)
    {
        if ((m_func(a) * m_func((a + b) / 2.0)) < 0)
        {
            b = (a + b) / 2.0;
        }
        else
        {
            a = (a + b) / 2.0;
        }
    }
    return (a + b) / 2.0;
}