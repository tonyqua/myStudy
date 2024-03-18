//
// Created by Anton on 29.02.2024.
//
#include <stdio.h>
#define SEC 60

int main(){
    int smin, hour, min;

    while(smin != 0){
        scanf("%d", &smin);
        hour = smin / SEC;
        min = smin % SEC;
        printf("%d hours\n", hour);
        printf("%d mins\n", min);
    }

    return 0;
}