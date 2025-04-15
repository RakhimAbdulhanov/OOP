#include "func.h"
#include <cmath>

double f(double x) {
    return 3 * sin(sqrt(x)) + 0.35 * x - 3.8;
}

double f_prime(double x) {
    return (3 * cos(sqrt(x))) / (2 * sqrt(x)) + 0.35;
}