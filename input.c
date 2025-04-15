#include <stdio.h>
#include "input.h"

int get_coefficients(double* a, double* b, double* c) {
    printf("Введите коэффициенты a, b и c: ");
    if (scanf("%lf %lf %lf", a, b, c) != 3) {
        fprintf(stderr, "Ошибка: Некорректный ввод. Пожалуйста, введите три числа.\n");
        return 1; // Код ошибки
    }
    return 0; // Успешное выполнение
}
