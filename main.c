#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    printf("Введите коэффициенты a, b и c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        fprintf(stderr, "Ошибка: Некорректный ввод. Пожалуйста, введите три числа.\n");
        return 1; // Код ошибки
    }

    printf("Вычисляем уравнение: %.2fx^2 + %.2fx + %.2f = 0\n", a, b, c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Корни: root1 = %.2lf, root2 = %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Один корень: root1 = root2 = %.2lf;\n", root1);
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Корни комплексные:\n");
        printf("root1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("root2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0;
}
