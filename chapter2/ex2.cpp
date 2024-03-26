//
// Created by Anton on 26.03.2024.
//
#include <stdio.h>
#define ROW 5

int main() {
    int row, column;

    for(row = 0; row < ROW; row++){
        for(column = 0; column <= row; column++){
            printf("$");
        }
        printf("\n");
    }
    return 0;
}
