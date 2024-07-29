#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int searchMax(int arr[], int size);
void fillArray(int ar[], int size, int min, int max);
void printArray(int arr[], int size);
 float avg(int ar[], int size);
 void reverseArray(int ar[], int size);
 void swap(int ar[], int i, int j);
 void firstLastPosSum(int ar[], int size);
 void firstLastPosSum1(int ar[], int size);

	int main(){
		int size = 40;
		int arr[size];
		int min = -120, max = 250;
		fillArray(arr, size, min, max);
		printArray(arr, size);
		printf("Max element index = %d\n", searchMax(arr, size));
		reverseArray(arr,size);
		printArray(arr, size);
		firstLastPosSum(arr, size);
		firstLastPosSum1(arr, size);

		min = 1, max = 80;
		fillArray(arr, size, min, max);
		printArray(arr, size);
		float res = avg(arr, size);
		if(res == -1)
			printf("Wrong data\n");
		else
			printf("Average = %.3f\n", res);

		return 0;
}

	 void firstLastPosSum1(int ar[], int size){
		 int i, firstPos = -1, lastPos = -1;
		 for(i =0; i < size; i++){
			 if(ar[i] > 0){
				 if(firstPos == -1)
					 firstPos = ar[i];
				 lastPos = ar[i];
			 }
		 }
		 printf(firstPos == -1? "No positive elements\n" :
				 "Sum first and last positive elements = %d\n", firstPos + lastPos);
	 }

	void firstLastPosSum(int ar[], int size){
		int i, firstPos = -1, lastPos = -1;
		for(i = 0; i < size; i++){
			if(ar[i] > 0){
				firstPos = ar[i];
				break;
			}
		}
		if( firstPos == -1){
			printf("No positive elements\n");
			return;
		}

		for(i = size-1; i >=0; i--){
			if(ar[i] > 0){
				lastPos = ar[i];
				break;
			}
		}
		printf("Sum first and last positive elements = %d\n", firstPos + lastPos);
	}

	void reverseArray(int ar[], int size){
		int i, j;
		for(i = 0, j = size-1; i < j; i++, j--){
			swap(ar, i, j);
		}
	}

	float avg(int ar[], int size){
	float sum = 0.;
	int i;
	for(i=0; i < size; i++){
		if(ar[i] <= 0)
			return -1.;
		sum += ar[i];
	}
	return sum / size;

}
	int searchMax(int arr[], int size){

		int i, max = arr[0], iMax = 0;
		for(i = 1; i < size; i++){
			if(arr[i] > max){
				max = arr[i];
				iMax = i;
			}
		}
		return iMax;
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
