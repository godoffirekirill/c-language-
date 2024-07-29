//
//  main.c
//  hw15
//
//  Created by Кирилл Курочкин on 29.07.2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sortReverse(int ar[],int size);
void fillArray(int ar[], int size, int min, int max);
void printArray(int arr[], int size);
void swap(int arr[], int i, int j);
void sortInRange(int ar[],int size,int start,int finish);
void evenFirst(int ar[],int size);
void evenFirstAdv(int ar[],int size);

int main(void) {
    
    int size = 15;
    int arr[size];
    fillArray(arr, size, 0, 100);
    printArray(arr,size);
    sortReverse(arr,size);
    printArray(arr,size);
    sortInRange(arr,size,0,7);
    printArray(arr,size);
    evenFirst(arr,size);
    printArray(arr,size);
    evenFirstAdv(arr,size);
    printArray(arr,size);
 

    
    
    return 0;
}

void sortReverse(int ar[],int size) {
    int i, j, flag;
    for(i = 0; i < size - 1; i++){
        flag = 1;
        for(j = 0; j < size -1 -i; j++){
            if(ar[j] < ar[j+1]){
                swap(ar, j+1, j);
                flag = 0;
            }
        }
        if(flag == 1)
            return;
    }
}
void fillArray(int ar[], int size, int min, int max){
        int i;
    //    srand(time(0));
    srand((unsigned)time(0));
        for( i=0; i< size; i++){
            ar[i] = min + rand()%(max-min+1);
        }
    }
void sortInRange(int ar[],int size,int start,int finish) {
    int i, j, flag = 0;
    for (i = start; i <= finish; i++) {
        flag = 1;
        for (j = start; j < finish - (i - start); j++) {
            if (ar[j] > ar[j + 1]) {
                swap(ar, j, j + 1);
                flag = 0;
            }
        }
        if (flag == 1)
            break;
    }
}
void evenFirst(int ar[],int size) {
    int i, j, flag;
        for(i = 0; i < size - 1; i++){
            flag = 1;
            for(j = 0; j < size -1 -i; j++){
                if(ar[j] % 2 != 0){
                    swap(ar, j+1, j);
                    flag = 0;
                }
            }
            if(flag == 1)
                return;
        }
}
void evenFirstAdv(int ar[],int size) {
    int i, j = 0;
    for (i = 0; i < size; i++) {
        if (ar[i] % 2 == 0) {
            swap(ar, i, j);
            j++;
        }
        
    }
    sortInRange(ar,size, 0, j - 1);
    sortInRange(ar,size , j, size - 1);

    
}
void printArray(int arr[], int size){
            int i;
            for(i = 0; i < size; i++){
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
void swap(int ar[], int i, int j){
        int temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
    }
