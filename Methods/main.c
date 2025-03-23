#include <stdio.h>
#define MAX_SIZE 10 //max size of the array

int main(){
    void fillArray(int arr[], int size);
    void getArrayElements(int arr[], int size);

    int n=0; // number of elements of the array
    int arr[MAX_SIZE];

    do{
        printf("Insert the array's size: \n");
        scanf("%d", &n);
    }while (n<=0 || n>MAX_SIZE);
    
    fillArray(arr, n);
    getArrayElements(arr, n);

}

void fillArray(int arr[], int size){
    int i = 0;
    do{ 
        arr[i] = i;
        i++;
    }while(i<size);
}

void getArrayElements(int arr[], int size){
    int i = 0;
    do{
        printf("%d ", arr[i]);
        i++;
    }while(i<size);
}

