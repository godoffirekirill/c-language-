#include<stdio.h>
#include<math.h>

void printArrayReverse(int ar[], int size);
int sumEvenIndexElements(int ar[], int size);
int sumEvenElements(int ar[], int size);
void changeElements(int ar[],int size);
void mergeArrays(int ar1[],int size1,int ar2[],int size2);
void mergeArrays1(int ar1[],int size1,int ar2[],int size2);

int main() {
	int ar[] = {3, -6, 7, 89, 0, -7, 120};
	int ar1[] = {100, 200, 300};
	int size  = sizeof(ar)/sizeof(int);
	int size1 = sizeof(ar1)/sizeof(int);

	printArrayReverse(ar, size);
	printf("Sum of even index elements = %d\n", sumEvenIndexElements(ar, size));
	printf("Sum of even elements = %d\n", sumEvenElements(ar, size));
	changeElements(ar, size);
	mergeArrays(ar, size, ar1, size1);
	mergeArrays1(ar, size, ar1, size1);

	return 0;
}

void printArrayReverse(int ar[], int size){
	int i;
	for(i = size-1; i >=0; i--){
		printf("%d  ", ar[i]);
	}
	printf("\n");
}
int sumEvenIndexElements(int ar[], int size){
	int sum = 0, i;
	for(i = 0; i < size; i += 2)
		sum += ar[i];

	return sum;
}

int sumEvenElements(int ar[], int size){
	int sum = 0, i;
	for(i = 0; i < size; i++){
		if(!(ar[i]%2))
			sum += ar[i];
	}
	return sum;
}
void changeElements(int ar[],int size){
	int i;
	for(i = 0; i < size; i++){
//		if(ar[i]%2)
//			ar[i]=1;
//		else ar[i]=0;
//===============================
//		ar[i] = ar[i] %2 == 0? 0 : 1;
//===============================
		ar[i] = fabs(ar[i]%2);

		printf("%d ", ar[i]);
	}
	printf("\n");
}

void mergeArrays(int ar1[],int size1,int ar2[],int size2){
	int sizeRes = size1 + size2;
	int res[sizeRes];
	int i;
	for(i = 0; i < size1; i++){
		res[i] = ar1[i];
		printf("%d ", res[i]);
	}
	for(i = 0; i < size2; i++){
		res[size1 + i] = ar2[i];
		printf("%d ", res[size1 + i]);
	}
	printf("\n");
}

void mergeArrays1(int ar1[],int size1,int ar2[],int size2){
	int sizeRes = size1 + size2;
	int i;
	int res[sizeRes];

	for(i = 0; i < sizeRes; i++){
		if(i < size1)
			res[i] = ar1[i];
		else
			res[i] = ar2[i - size1];
		printf("%d ", res[i]);
	}
	printf("\n");
}
