#include <stdio.h>
#include "output.h"
#include "solver.h"

void print_solution(double a, double b, double c, Solution solution) {
    printf("Вычисляем уравнение: %.2fx^2 + %.2fx + %.2f = 0\n", a, b, c);

    if (!solution.has_roots) {
        printf("Нет корней.\n");
    }
    else if (solution.complex_roots) {
        printf("Корни комплексные:\n");
        printf("root1 = %.2lf + %.2lfi\n", solution.realPart, solution.imaginaryPart);
        printf("root2 = %.2lf - %.2lfi\n", solution.realPart, solution.imaginaryPart);
    }
    else if (solution.root1 == solution.root2) {
        printf("Один корень: root1 = root2 = %.2lf;\n", solution.root1);
    }
    else {
        printf("Корни: root1 = %.2lf, root2 = %.2lf\n", solution.root1, solution.root2);
    }
}
