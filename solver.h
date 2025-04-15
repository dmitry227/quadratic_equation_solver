#ifndef SOLVER_H
#define SOLVER_H

typedef struct {
    int has_roots; // 1 - true, 0 - false
    double root1;
    double root2;
    int complex_roots; // 1 - true, 0 - false
    double realPart;
    double imaginaryPart;
} Solution;

Solution solve_quadratic_equation(double a, double b, double c);

#endif
