#include "func.h"
#include <cmath>

double f(double x) {
    return 3 * std::sin(std::sqrt(x)) + 0.35 * x - 3.8;
}

double f_prime(double x) {
    return (3 * std::cos(std::sqrt(x))) / (2 * std::sqrt(x)) + 0.35;
}