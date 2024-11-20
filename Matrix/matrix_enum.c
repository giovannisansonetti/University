#include <stdio.h>
#include <stdlib.h>
#define MAX_STUD 3
#define NUM_EX 5

typedef enum { //user's defined type
    EX1,
    EX2,
    EX3,
    EX4,
    EX5
} exams_t;

int main(){
    int results[MAX_STUD][NUM_EX];
    for(int i = 0; i < MAX_STUD; i++){
        for(exams_t ex = 1; ex < NUM_EX; ex++){
            printf("\n Inserire il voto dell'esercitazione [%d] dello studente [%d] ",ex, i+1);
            scanf("%d", &results[i][ex]);
        }
    }

    for(int i = 0; i < MAX_STUD; i++){
        printf("\n Student number: [%d] ", i+1);
        for(exams_t ex = 1; ex < NUM_EX; ex++){
            printf("Grade: [%d] \t", results[i][ex]);
        }
        printf("\n");
    }
    
}