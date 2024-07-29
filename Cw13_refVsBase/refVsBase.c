#include<stdio.h>

void printArray(int arr[], int size);
	void f1(int a);
	void f2(int arr[], int size);

	int main(){

		int a = 10;
		f1(a); //f1(10)
		printf("%d\n", a);

		//=====================================

		int arr[] = {1,2,3};
		int size = sizeof(arr)/sizeof(int);
		printArray(arr,size);
		f2(arr, size);
		printArray(arr,size);
		return 0;
}
	void f2(int arr[], int size){
		arr[0] = 100500;
	}
	void f1(int a){

		a *= 10;
		printf("%d\n", a);
	}

	void printArray(int arr[], int size){
			int i;
			for(i = 0; i < size; i++){
				printf("%d   ", arr[i]);
			}
			printf("\n");
		}
