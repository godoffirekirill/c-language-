#include<stdio.h>
	void printArray(int arr[], int size);
	int sumElements(int arr[], int size);
	int sumOddElements(int arr[], int size);
	int main(){
		int size = 10;
		//===========Option 1===================
		//                 0                 9
		int a[size]; // a [][][][][][][][][][]
		printf("%d\n", a[0]);
		a[0] = 345;
		printf("%d\n", a[0]);
		printf ("%d\n", a[15]); // very dangerous!!!!
		a[1] = -21;
		a[2] = 100500;
		//=============Option2=================
		int a1[] = {8,12,-3, 45, 999, -780, 0, 0, -1};
		printf("%d, %d, %d\n", a1[0], a1[5], a1[8]);

		//size = 9;

		int size1 = sizeof(a1); // size in byte
		printf("%d\n", size1);
		size1 = size1 / sizeof(int);
		printf("%d\n", size1);

		printArray(a1, size1);

		//============Option3===========
		int size2 = 8;
		int a2[8] = {3, 42};
		printArray(a2, size2);

		printf("Sum of elements = %d\n", sumElements(a1, size1));
		printf("Sum of odd elements = %d\n", sumOddElements(a1, size1));
		return 0;
}

	int sumOddElements(int arr[], int size){
		int i, res = 0;
		for(i =0; i< size; i++){
			if(arr[i]% 2 != 0)
				res += arr[i];
		}
		return res;
	}

	int sumElements(int arr[], int size){
		int i, sum = 0;
		for( i = 0; i < size; i++){
			sum += arr[i];
		}
		return sum;
	}

	void printArray(int arr[], int size){
		int i;
		for(i = 0; i < size; i++){
			printf("%d   ", arr[i]);
		}
		printf("\n");
	}
