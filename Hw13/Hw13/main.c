//
//  main.c
//  Hw13
//
//  Created by Кирилл Курочкин on 22.07.2024.
//

#include <stdio.h>

void printArrayReverse(int arr[],int size);
int sumEvenIndexElements(int arr[],int size);
int sumElements(int arr[], int size);
int sumEvenElements(int arr[], int size);
void changeElements(int arr[],int size);
void mergeArrays(int arrOne[],int sizeOne, int arrTwo[], int sizeTwo);

int main(int argc, const char * argv[]) {
    // insert code here...
  //  printf("Hello, World!\n");
    int a1[] = {8,12,-3, 45, 999, -780, 0, 0, -1};
    int b[] ={0,1,2,3,4,5,6,7,8,9};
    int c[] ={10,11,12};

    printArrayReverse(a1, 8);
    int sumIndex = sumEvenIndexElements(b, 9);
    int sumArrElements = sumEvenElements(b,9);
    
    printf("%d\n",sumIndex);
    printf("%d\n",sumArrElements);
    changeElements(b,9);
    mergeArrays(b, 10,c,3);
    return 0;
}

void printArrayReverse(int arr[],int size) {
    int i;
    for(i = 0; i <= size; size--){
        printf("%d   ", arr[size]);
    }
    printf("\n");
    
    
}

int sumEvenIndexElements(int arr[],int size) {
    int i, sum = 0;
    for( i = 0; i < size; i++){
        if (i % 2 ==0) {
            sum += arr[i];

        }
            }
            return sum;
}
int sumElements(int arr[], int size){
    int i, sum = 0;
    for( i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int sumEvenElements(int arr[], int size) {
    int i, sum = 0;
    for( i = 0; i < size; i++){
        if (arr[i] % 2 ==0) {
            sum += arr[i];

        }
            }
            return sum;

}
void changeElements(int arr[],int size) {
    int i;
    for( i = 0; i < size; i++){
        if(i % 2 == 0) {
            arr[i] = 0;
        }
        else arr[i] = 1;
        printf("%d   ", arr[i]);
    }

}
void mergeArrays(int arrOne[],int sizeOne, int arrTwo[], int sizeTwo) {
    int i,j = 0;
    int totalSize = sizeOne + sizeTwo;
    int arrays[totalSize];

    for(i = 0; i < sizeOne; i++) {
        arrays[j] = arrOne[i];
        j++;
    }
    for(i = 0; i < sizeTwo; i++) {
        arrays[j] = arrTwo[i];
        j++;
    }
    
    for(i = 0; i < totalSize; i++) {
        printf("%d   \n", arrays[i]);

    }
    
  
}
