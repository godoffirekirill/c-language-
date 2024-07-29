#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArray(int ar[], int size, int min, int max);
void printArray(int arr[], int size);
void swap(int ar[], int i, int j);
void selectSort(int arr[], int size);
void bubbleSort(int arr[], int size);
	int main(){
		int size = 15;
		int arr[size];
		fillArray(arr, size, 0, 100);
		printArray(arr, size);
//		selectSort(arr, size);
		bubbleSort(arr, size);
		printArray(arr, size);

		return 0;
}
	void bubbleSort(int arr[], int size){
		int i, j, flag;
		for(i = 0; i < size - 1; i++){
			flag = 1;
			for(j = 0; j < size -1 -i; j++){
				if(arr[j] > arr[j+1]){
					swap(arr, j+1, j);
					flag = 0;
				}
			}
			if(flag == 1)
				return;
		}
	}


	void selectSort(int arr[], int size){
		int i, j, min, indexMin;
		// 5 7 24 56
		for(i =0; i < size; i++){
			min = arr[i];
			indexMin = i;
			for(j = i +1; j < size; j++){
				if(arr[j] < min){
					min = arr[j];
					indexMin = j;
				}
			}
			if(indexMin != i)
				swap(arr, i, indexMin);
		}
	}

	void fillArray(int ar[], int size, int min, int max){
		int i;
		srand(time(0));
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
	 void swap(int arr[], int i, int j){
		 int temp = arr[i];
		 arr[i] = arr[j];
		 arr[j] = temp;
	 }
