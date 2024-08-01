//
//  main.c
//  Hw16
//
//  Created by Кирилл Курочкин on 01.08.2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArray(int ar[], int size, int min, int max);
void printArray(int arr[], int size);
void swap(int arr[], int i, int j);
void oddFirst(int ar[],int size);
void bubbleSort(int arr[], int size);
int isSorted(int ar[],int size);
int searchAdv(int ar[], int size, int number);
int search(int arr[], int size, int value);
int binarySearch(int arr[], int size, int value);



int main(int argc, const char * argv[]) {

    int size = 15;
    int arr[size];
    int value = 12;
    int value2 = 11;
    int arr2[] = {1,2,3,4,5,6,7,8,9,10,12,34,56,78};
    int arr3[] = {64, 20, 11, 3, 14, 9, 83, 60, 51, 85, 89, 51, 13, 73, 68};

    fillArray(arr, size, 0, 100);
    printArray(arr,size);
    oddFirst(arr,size);
    printArray(arr,size);
    bubbleSort(arr,size);
    printArray(arr,size);
    printf("array is sorted %d\n",isSorted(arr,size));
    fillArray(arr, size, 0, 100);
    printArray(arr,size);

    printf("index search = %d\n", searchAdv(arr2, size, value));
    printf("index search = %d\n", searchAdv(arr2, size, value));
    printf("index search = %d\n", search(arr3, size, value2));

    return 0;
}

void oddFirst(int ar[],int size) {
    int i, j, flag;
        for(i = 0; i < size - 1; i++){
            flag = 1;
            for(j = 0; j < size -1 -i; j++){
                if(ar[j] % 2 == 0){
                    swap(ar, j+1, j);
                    flag = 0;
                }
            }
            if(flag == 1)
                return;
        }
}

int isSorted(int ar[],int size) {
    int i, j, flag = 0;
    for (i = 0; i < size - 1; i++) {
        flag = 0;
        for (j = 0; j < size - 1 - i; j++) {
            if (ar[j] < ar[j + 1]) {
                flag = 1;
            }
        }
    }
    return flag == 0? 0:1;

    }

int searchAdv(int ar[], int size, int number){
    int index = isSorted(ar,size) == 0? search(ar,size,number): binarySearch(ar,size,number);
    return index;
    }

int binarySearch(int arr[], int size, int value){
    int left = 0, right = size-1, middle = 0, count = 0;
        while(left <= right){
            count++;
            middle = (left+right)/2;
            if(arr[middle] == value)
            {
         //       printf("Count binary search = %d\n", count);
                return middle;
            }
            if(arr[middle] < value)
                left = middle + 1;
            else
                right = middle -1;
        }
    //    printf("Count binary search = %d\n", count);

        return -1;
    }
    
    
int search(int arr[], int size, int value){
        int i, count = 0;
        for(i =0; i < size; i++){
            count++;
            if(arr[i] == value){
 //               printf("Count in regular search = %d\n", count);
                return i;
            }
        }
 //       printf("Count in regular search = %d\n", count);
        return -1;
    }
    
    
    

void bubbleSort(int arr[], int size) {
    int i, j, flag;
    for (i = 0; i < size - 1; i++) {
        flag = 1;
        for (j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr, j + 1, j);
                flag = 0;
            }
        }
        if (flag == 1)
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
