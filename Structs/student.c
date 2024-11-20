#include <stdlib.h>
#include <stdio.h>

typedef struct{
    char name[20];
    char lastname[20];
    int test_grade; 
    int oral_grade; 
}student_t;


int main(){
    student_t student; 
    int avg; 
    printf("\nInsert the student's name: ");
    scanf("%s", student.name);
    printf("\nInsert the student's lastname: ");
    scanf("%s", student.lastname);

    printf("\nInsert the student's grade of the test: ");
    scanf("%d", &student.test_grade);
    printf("\nInsert the student's grade of the oral test: ");
    scanf("%d", &student.oral_grade);

    avg = (student.test_grade+student.oral_grade)/2;

    printf("%s %s has an average of %2.f", student.name, student.lastname, avg);
}