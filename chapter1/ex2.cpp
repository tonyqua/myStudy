//
// Created by Anton on 02.03.2024.
//
#include <stdio.h>

int main(){
    int a;
    int b = 0;
    printf("Введите любое целое число: \n");
    scanf("%d", &a);
    while(b <= 10){
        printf("%d ", a);
        a++;
        b++;
    }
    printf("\nКонец.");
    return 0;
}