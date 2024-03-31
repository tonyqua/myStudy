//
// Created by Anton on 26.03.2024.
//
#include <stdio.h>
#define ROW 6


int main(){
    char ch;
    int row;

    for(row = 0; row < ROW; row++){
        for(ch = 'F'; ch >= ('F' - row); ch--){
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}