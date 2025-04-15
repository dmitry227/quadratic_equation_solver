#include <stdio.h>
#include "input.h"
#include "solver.h"
#include "output.h"
#include <stdlib.h>

int main() {
    double a, b, c;
    Solution solution;

    if (get_coefficients(&a, &b, &c) != 0) {
        return 1; // Обработка ошибки ввода
    }

    solution = solve_quadratic_equation(a, b, c);
    print_solution(a, b, c, solution);

    return 0;
}

