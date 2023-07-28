#include <stdio.h>

double power(double x, int y) {
    double result = 1.0;

    if (y < 0) {
        x = 1.0 / x;
        y = -y;
    }

    for (int i = 0; i < y; i++) {
        result *= x;
    }

    return result;
}

int main() {
    double x;
    int y;
    printf("x ga qiymat bering: ");
    scanf("%lf", &x);

    printf("y ga qiymat bering: ");
    scanf("%d", &y);

    double result = power(x, y);
    printf("Yechim: %.5lf\n", result);

    return 0;
}
