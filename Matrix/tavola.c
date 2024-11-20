#include <stdio.h>
#include <stdlib.h>
#define NRIGHE 10
#define NCOLONNE 10

int main(){
    int tabella[NRIGHE][NCOLONNE];
    for(int i = 0; i < NRIGHE; i++){
        for(int j=0; j < NCOLONNE; j++){
            tabella[i][j] = i * j;
        }
    }

    //print
    for(int i = 0; i < NRIGHE; i++){
        for(int j=0; j < NCOLONNE; j++){
            printf("%d \t", tabella[i][j]);
        }
    }
}