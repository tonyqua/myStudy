//
// Created by Anton on 08.03.2024.
//
#include <stdio.h>

void module(){
    printf("Эта программа вычисляет результат деления по модулю.\n");
    printf("Введите второе число, которое будет служить вторым операндом: ");

    int sOperand;
    scanf("%d", &sOperand);

    printf("Теперь введите первый операнд: ");
    int fOperand;
    scanf("%d", &fOperand);

    printf("%d %% %d равно %d\n", fOperand, sOperand, fOperand % sOperand);
    printf("Введите следующее число для первого операнда (<= 0 для выхода из программы): ");
    scanf("%d", &fOperand);
    while (fOperand > 0){
        printf("%d %% %d равно %d\n", fOperand, sOperand, fOperand % sOperand);
        printf("Введите следующее число для первого операнда (<= 0 для выхода из программы): ");
        scanf("%d", &fOperand);
    }
    printf("Готово");
}

int main() {
    module();
    return 0;
}