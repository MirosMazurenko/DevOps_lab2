#include "FuncA.h"
#include <cmath>

double FuncA::calculate()
{
    double sum = M_PI / 2;
    for (int i = 0; i < 3; ++i)
    {
        double numerator = factorial(2 * i);
        double denominator = std::pow(4, i) * std::pow(factorial(i), 2) * (2 * i + 1);
        sum -= (numerator / denominator) * std::pow(x, 2 * i + 1);
    }
    return sum;
}