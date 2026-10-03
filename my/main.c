#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    double a, b, c, x, fx;

    printf("Введите значения a, b, c, x: ");
    if (scanf("%lf %lf %lf %lf", &a, &b, &c, &x) != 4) {
        printf("Ошибка ввода данных!\n");
        return 1;
    }

    if ((x + a) < 0 && c == 0) {
        if (a * x == 0) {
            printf("Ошибка: деление на ноль в выражении 1/(a*x)\n");
            return 1;
        }
        fx = 1.0 / (a * x) - b;
    }
    else if ((x + a) > 0 && c != 0) {
        if (sin(x) == 0) {
            printf("Ошибка: деление на ноль в выражении (x - a)/sin(x)\n");
            return 1;
        }
        fx = (x - a) / sin(x);
    }
    else {
        if (c == 6) {
            printf("Ошибка: деление на ноль в выражении (10*x)/(c - 6)\n");
            return 1;
        }
        fx = (10.0 * x) / (c - 6);
    }

    printf("----------------------------------------\n");
    printf("Аргумент x = %.5lf\n", x);
    printf("Значение функции f(x) = %.5lf\n", fx);
    printf("----------------------------------------\n");

    return 0;
}