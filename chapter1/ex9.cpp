#include <stdio.h>

void Temperatures(double Far){
    double Cels = 5.0 / 9.0 * (Far - 32.0);
    printf("Температура по Цельсию: %.2lf\n", Cels);
    printf("Температура по Кельвина: %.2lf\n", Cels + 273.16);
}

int main(){
    double Far;
    int input;
    printf("Введите температуру по Фаренгейту или 'q' для выхода: ");
    input = scanf("%lf", &Far);
    while (input == 1){
            Temperatures(Far);
            printf("Введите температуру по Фаренгейту или 'q' для выхода: ");
            input = scanf("%lf", &Far);
    }
    return 0;
}
