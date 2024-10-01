#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define EPS 0.001

double m_func(double x);
double processing(double a, double b);
double derivative_of_func(double x);

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

double derivative_of_func(double x)
{
    return 2 / sqrt(4 * x) + sin(x);
}

double processing(double a, double b)
{
    double h = (b - a) / 100.0;
    double y = m_func(a + 2 * h) - 2 * m_func(a + h) + m_func(a);
    double x0;
    double x1;
    if (m_func(a) * y < 0)
    {
        x0 = a;
    }
    else
    {
        x0 = b;
    }
    double x1 = x0 - (m_func(x0) / derivative_of_func(x0));
    while (fabs(x1 - x0) > EPS)
    {
        x0 = x1;
        x1 = x0 - (m_func(x0) / derivative_of_func(x0));
    }
    return x1;
}