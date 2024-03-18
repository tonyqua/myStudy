//
// Created by Anton on 08.03.2024.
//
#include <stdio.h>

double cube(double a) {
    double cub = a * a * a;
    printf("Куб числа %.2lf = %.2lf", a, cub);
    return cub;
}

int main() {
    double a;
    printf("Введите число котороые вы хотите вывести в кубе:\n");
    scanf("%lf", &a);
    cube(a);

    return 0;
}