#include <stdlib.h>
#include <stdio.h>
#define NSTUDENT 3

typedef struct{
    char name[20];
    char lastname[20];
    int test_grade; 
    int oral_grade; 
    int avg;
}student_t;


int main(){
    student_t student[NSTUDENT];  

    for(int i = 0; i<NSTUDENT; i++){
        printf("\nInsert the student's name: ");
        scanf("%s", student[i].name);
        printf("\nInsert the student's lastname: ");
        scanf("%s", student[i].lastname);

        printf("\nInsert the student's grade of the test: ");
        scanf("%d", &student[i].test_grade);
        printf("\nInsert the student's grade of the oral test: ");
        scanf("%d", &student[i].oral_grade);
        
        student[i].avg = (student[i].test_grade+student[i].oral_grade)/2;

    }
    for(int i = 0; i<NSTUDENT; i++){
        printf("%s %s has an average of %d \n", student[i].name, student[i].lastname, student[i].avg);
    }
}
