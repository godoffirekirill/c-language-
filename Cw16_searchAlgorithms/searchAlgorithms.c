#include<stdio.h>
#include <stdlib.h>
#include <time.h>

	int search(int arr[], int size, int value);
	int binarySearch(int arr[], int size, int value);
	void fillArray(int ar[], int size, int min, int max);
	void bubbleSort(int arr[], int size);
	void swap(int ar[], int i, int j);

	int main(){
		int size = 14;
		int arr[] = {1,2,3,4,5,6,7,8,9,10,12,34,56,78};


		int value = 10;
		size = 100000;
		int min = -3000;
		int max = 5000;
		int arr2[size];

		fillArray(arr2, size, min, max);
		printf("index search = %d\n", search(arr2, size, value));
		bubbleSort(arr2,size);
		printf("index binary search = %d\n", binarySearch(arr2, size, value));
		return 0;
}

	int search(int arr[], int size, int value){
		int i, count = 0;
		for(i =0; i < size; i++){
			count++;
			if(arr[i] == value){
				printf("Count in regular search = %d\n", count);
				return i;
			}
		}
		printf("Count in regular search = %d\n", count);
		return -1;
	}

	int binarySearch(int arr[], int size, int value){
		int left = 0, right = size-1, middle, count = 0;
		while(left <= right){
			count++;
			middle = (left+right)/2;
			if(arr[middle] == value)
			{
				printf("Count binary search = %d\n", count);
				return middle;
			}
			if(arr[middle] < value)
				left = middle + 1;
			else
				right = middle -1;
		}
		printf("Count binary search = %d\n", count);
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
	void fillArray(int ar[], int size, int min, int max) {
		int i;
		srand(time(0));
		for (i = 0; i < size; i++) {
			ar[i] = min + rand() % (max - min + 1);
		}
	}

	void swap(int arr[], int i, int j) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
