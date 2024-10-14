#include "FuncA.h"
#include <cmath>
#include <iostream>

double factorial(int num)
{
    if (num == 0 || num == 1)
        return 1;
    double fact = 1;
    for (int i = 2; i <= num; ++i)
    {
        fact *= i;
    }
    return fact;
}

double FuncA::calculate(int n, double x)
{
    if (std::abs(x) >= 1)
    {
        std::cerr << "x must be in the range (-1, 1) for the series to converge." << std::endl;
        return NAN;
    }

    double sum = M_PI / 2;
    for (int i = 0; i < n; ++i)
    {
        double numerator = factorial(2 * i);
        double denominator = std::pow(4, i) * std::pow(factorial(i), 2) * (2 * i + 1);
        sum -= (numerator / denominator) * std::pow(x, 2 * i + 1);
    }
    return sum;
}