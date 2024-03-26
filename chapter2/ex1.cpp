//
// Created by Anton on 26.03.2024.
//
#include <stdio.h>
#define SIZE 25
int main() {
    char ch[SIZE];
    int index;
    for(index = 0; index <= 'z'; index++){
        ch[index] = 'a' + index;
    }

    for(index = 0; index <= SIZE; index++){
        printf("%c", ch[index]);
    }
    
    return 0;
}