#include <math.h>
#include "solver.h"

Solution solve_quadratic_equation(double a, double b, double c) {
    Solution solution;
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        solution.has_roots = 1; // true
        solution.complex_roots = 0; // false
        solution.root1 = (-b + sqrt(discriminant)) / (2 * a);
        solution.root2 = (-b - sqrt(discriminant)) / (2 * a);
    }
    else if (discriminant == 0) {
        solution.has_roots = 1; //true
        solution.complex_roots = 0; // false
        solution.root1 = solution.root2 = -b / (2 * a);
    }
    else {
        solution.has_roots = 1; // true Даже с комплексными корнями, решение существует
        solution.complex_roots = 1; // true
        solution.realPart = -b / (2 * a);
        solution.imaginaryPart = sqrt(-discriminant) / (2 * a);
    }
    return solution;
}
