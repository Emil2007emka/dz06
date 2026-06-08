#include "solver.h"

float solver(float a, float b, float c) {
    float d = b * b - 4 * a * c;
    if (d < 0) {
        throw std::logic_error("discriminant is negative");
    }
    return (-b + std::sqrt(d)) / (2 * a);
}
