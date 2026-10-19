#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int homework();
int main() {
    (setlocale(LC_ALL, "RUS"));
	homework();
}
int homework() {
    int n;
    double sum = 0.0;
    printf("Вычисление суммы: 1/3^2 + 1/5^2 + 1/7^2 + ... + 1/(2n+1)^2\n");
    printf("Введите значение n: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Ошибка: n должно быть больше или равно 1\n");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        double denominator = 2.0 * i + 1.0;
        sum += 1.0 / (denominator * denominator);
    }
    printf("\nСумма ряда для n = %d равна: %.6lf\n", n, sum);

    return 0;
}