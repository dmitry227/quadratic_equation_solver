#include <stdio.h>
#include "input.h"

int get_coefficients(double* a, double* b, double* c) {
    printf("������� ������������ a, b � c: ");
    if (scanf("%lf %lf %lf", a, b, c) != 3) {
        fprintf(stderr, "������: ������������ ����. ����������, ������� ��� �����.\n");
        return 1; // ��� ������
    }
    return 0; // �������� ����������
}
