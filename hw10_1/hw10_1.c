#include<stdio.h>
	void printPrimeNumber(int from, int to);
	int isPrimeNumber(int number);
	int factorial(int number);
	int reverseNumber(int number);

	int main(){
		int from = -3, to = 10;
		printPrimeNumber(from, to)	;
		int number = 6;
		printf("factorial %d = %d\n", number, factorial(number));

		number = -123004;
		int res = reverseNumber(number);
		if(res!=-1)
			printf("%d in reverse = %d\n", number, res);

		return 0;
	}

	int reverseNumber(int number){

		if(number < 0 || number %10 == 0 ){
			printf("Wrong number\n");
			return -1;
		}
		if(number >=0 && number <=9){
			return number;
		}
		//1234 => 4 => 4*10 + 3 = 43 => 43*10 + 2 => 432 => 432*10 + 1 = 4321
		int res = 0;
		while(number){
			res = res *10 + number %10;
			number /= 10;
		}
		return res;
	}

	int factorial(int number){
		if(number < 0 || number > 12 ){
			printf("Wrong data\n");
			return -1;
		}
		int res = 1;
		while( number > 1){
			res *= number;
			number--;
		}
		return res;
	}

	void printPrimeNumber(int from, int to){
		if(from > to || to < 2)
		{
			printf("Wrong range\n");
			return;
		}
		if(from < 2){
			from = 2;
		}

		while (from <=to){
			if(isPrimeNumber(from)){
				printf("%d\n", from);
			}
			from++;
		}
	}

	int isPrimeNumber(int number){
			if(number < 2 ){
				return 0;
			}
			int divider = 2;
			while(divider <=number / 2){
				if(!(number % divider)) {
					return 0;
				}
				divider ++;
			}
			return 1;
		}
