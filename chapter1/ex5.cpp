//
// Created by Anton on 02.03.2024.
//
/*на соревнованиях по плаванию электрик замкнул тройку лидеров*/
#include <stdio.h>

int main(){
    int count, sum;

    count = 0;
    sum = 0;

    int a;
    scanf("%d", &a);
    while(count++ < a){
        sum = sum + count * count;
    }
    printf("sum = %d\n", sum);
    return 0;
}