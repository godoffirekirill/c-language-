#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void fillArray(int ar[], int size, int min, int max);
void printArray(int arr[], int size);
int indexOf(int ar[], int size, int value);
int searchMin(int ar[], int size);

	int main(){
		srand(time(0));
//		printf("%d\n", time(0));
		printf("%d\n", RAND_MAX);
		printf("%d\n",rand());
		printf("%d\n",rand());
		printf("%d\n",rand()%10);
		printf("%d\n",rand()%100);

		int size = 35;
		int arr[size];
		int min = -10, max = 44;
		fillArray(arr,size,min,max);
		printArray(arr, size);
		int value = 10;
		int res = indexOf(arr, size,value);
		printf(res==-1? "No such value\n" : "index %d = %d\n",value, res );
		printf("Min element = %d\n", searchMin(arr, size));

		return 0;
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
				printf("%d   ", arr[i]);
			}
			printf("\n");
		}

	int indexOf(int ar[], int size, int value){
		int i;
		for(i=0; i < size; i++){
			if(ar[i] == value)
				return i;
		}
		return -1;
	}

	int searchMin(int ar[], int size){
		int min = ar[0];
		int i;
		for(i = 1; i < size; i++){
			if(ar[i] < min)
				min = ar[i];
		}
		return min;
	}
