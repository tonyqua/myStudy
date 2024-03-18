//
// Created by Anton on 02.03.2024.
//
#include <stdio.h>

int main(){
    float cm;
    int foot;
    float inch;
    printf("Введите высоту в сантиметрах: ");
    scanf("%f", &cm);
    while(cm > 0) {
        foot = (int)(cm * 0.0328084);
        inch = (cm - (foot / 0.0328084)) * 0.393701;
        printf("%.1f см = %d футов, %.1f дюймов\n", cm, foot, inch);
        scanf("%f", &cm);
    }
    printf("\nКонец");
    return 0;
}