//
// Created by Anton on 02.03.2024.
//
#include <stdio.h>

int main(){
    const int daysInWeek = 7;
    int days;

    printf("Введите количество дней: \n");
    scanf("%d", &days);

    while(days > 0){
        int w = days / daysInWeek;
        int d = days % daysInWeek;
        printf("%d week(-s)\n", w);
        printf("%d day(-s)\n", d);
        scanf("%d", &days);
    }

    printf("\nКонец");

    return 0;
}