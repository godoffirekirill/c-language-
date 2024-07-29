#include<stdio.h>

void printPrimeNumber(int from, int to);
int isPrimeNumber(int number);

int factorial(int number);

int reverseNumber(int number);

int main() {

	printPrimeNumber(1,10);
	printf("factorial = %d \n",factorial(5));
	printf("Перевернутое число: %d\n", reverseNumber(1234));

	return 0;
}


void printPrimeNumber(int from, int to) {

	while (from < to) {
		int prime = isPrimeNumber(from);

		if (prime != 0) {
			printf("prime = %d\n",from);
		}
		from++;
	}


}
int factorial(int number) {
	if (number == 1) {
		return 1;
	}
	return factorial(number - 1) * number;
}


int reverseNumber(int number) {
	int reversed = 0;
	while(number != 0) {
		int digit = number % 10;
		reversed = reversed * 10 + digit;
		number = number / 10;
	}
	return reversed;
}



int isPrimeNumber(int number){
	if(number < 2 || !(number%2)){
		return 0;
	}
	int divider = 2;
	while(divider <number / 2){
		if(!(number % divider)) {
			return 0;
		}
		divider ++;
	}
	return 1;
}
