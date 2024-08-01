#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void sortReverse(int ar[], int size);
void sortInRange(int ar[], int size, int start, int finish);
void sortInRangeReverse(int ar[], int size, int start, int finish);
void evenFirst(int ar[], int size);
void evenFirst1(int ar[], int size);
void evenFirstAdv(int ar[], int size);
void evenFirstAdv1(int ar[], int size);
void fillArray(int ar[], int size, int min, int max);
void printArray(int arr[], int size);
void swap(int ar[], int i, int j);
void bubbleSort(int arr[], int size);

int main() {
	int size = 20;
	int arr[size];
	int start = 0, finish = size - 1;
	fillArray(arr, size, 0, 100);
	printArray(arr, size);
	//		sortReverse(arr, size);
	//		printArray(arr, size);
	//		sortInRange(arr, size, start, finish);
//	evenFirst(arr, size);
//	printArray(arr, size);
//	evenFirst1(arr, size);
	evenFirstAdv(arr, size);
	printArray(arr, size);
	evenFirstAdv1(arr, size);
		printArray(arr, size);

	return 0;
}

void evenFirstAdv1(int arr[], int size){
	evenFirst1(arr, size); // sort by even/odd
	int i, evenLast = 0;
	for(i = 0; i < size; i++){
//		if(arr[i]%2 != 0)
//			break;
//		evenLast++;
		if(arr[i]%2 == 0)
			evenLast = i;
	}
	printf("%d\n", evenLast);
	sortInRange(arr, size, 0, evenLast);
	sortInRangeReverse(arr, size, evenLast+1, size-1);
}

void evenFirstAdv(int arr[], int size) {
	int i, j, flag;
	for (i = 0; i < size - 1; i++) {
		flag = 1;
		for (j = 0; j < size - 1 - i; j++) {
			if (arr[j] % 2 != 0 && arr[j + 1] % 2 == 0) {
				swap(arr, j + 1, j);
				flag = 0;
			} else if (arr[j] % 2 == 0 && arr[j + 1] % 2 == 0 && arr[j] > arr[j+ 1]) {
				swap(arr, j + 1, j);
				flag = 0;
			} else if(arr[j] % 2 != 0 && arr[j + 1] % 2 != 0 && arr[j] < arr[j+ 1]){
				swap(arr, j + 1, j);
								flag = 0;
			}
		}
		if (flag == 1)
						return;
	}
}

void evenFirst1(int arr[], int size) {
	int i, j = 0;
	for (i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			swap(arr, i, j);
			j++;
		}
	}
}

void evenFirst(int arr[], int size) {
	int i, j, flag;
	for (i = 0; i < size - 1; i++) {
		flag = 1;
		for (j = 0; j < size - 1 - i; j++) {
			if (arr[j] % 2 != 0 && arr[j + 1] % 2 == 0) {
				swap(arr, j + 1, j);
				flag = 0;
			}
		}
		if (flag == 1)
			return;
	}
}

void sortInRange(int arr[], int size, int start, int finish) {
	if (start < 0 || finish > size - 1 || start > finish) {
		printf("Wrong data\n");
		return;
	}
	int i, j, flag;
	for (i = start; i <= finish - 1; i++) {
		flag = 1;
		for (j = start; j <= finish - 1 - (i - start); j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr, j + 1, j);
				flag = 0;
			}
		}
		if (flag == 1)
			return;
	}
}
void sortInRangeReverse(int arr[], int size, int start, int finish) {
	if (start < 0 || finish > size - 1 || start > finish) {
		printf("Wrong data\n");
		return;
	}
	int i, j, flag;
	for (i = start; i <= finish - 1; i++) {
		flag = 1;
		for (j = start; j <= finish - 1 - (i - start); j++) {
			if (arr[j] < arr[j + 1]) {
				swap(arr, j + 1, j);
				flag = 0;
			}
		}
		if (flag == 1)
			return;
	}
}

void sortReverse(int arr[], int size) {
	int i, j, flag;
	for (i = 0; i < size - 1; i++) {
		flag = 1;
		for (j = 0; j < size - 1 - i; j++) {
			if (arr[j] < arr[j + 1]) {
				swap(arr, j + 1, j);
				flag = 0;
			}
		}
		if (flag == 1)
			return;
	}
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

void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%d  ", arr[i]);
	}
	printf("\n");
}
void swap(int arr[], int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
