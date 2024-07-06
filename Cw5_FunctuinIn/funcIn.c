#include <stdio.h>


void printNumber(int a);

void printSum(int a, int b);

double div(int a, int b);

float change(float cash, float price, int discount);


int main() {

	printNumber(25);

	int var = 25;
	printNumber(var);

	int a = 100500;
	printf("%d\n",a);

	printNumber(a);
	printSum(var, a);
	printSum(a, var);


	printf("%.2f\n",div(5,10));

	printf("change =%.2f\n",change(200.0,79.90,20));

	return 0;
}

void printNumber(int a) {
	printf("Number = %d\n",a);
}

void printSum(int a, int b){
	printf("%d + %d = %d\n",a,b,a+b);
}
double div(int a, int b) {
	return (double)a/b;
	//return (double)a/b* 1.0; //can multiply on 1.0 to get double type
}

float change(float cash, float price, int discount){
	float amount = price - price * discount/100;

	return cash - amount;
}

