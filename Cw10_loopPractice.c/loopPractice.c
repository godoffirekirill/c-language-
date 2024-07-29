#include<stdio.h>

int isPrimeNumber(int number);
void reverse();
	int main(){

		int number = 151;

		printf("%d\n", isPrimeNumber(number));

		reverse();

		return 0;
}

	void reverse(){
		long long num;
		do{
			printf("Enter positive number \n");
			fflush(stdout);
			scanf("%lli", &num);

		}while(num<=0);

		while(num > 0){
			printf("%lli", num % 10);
			num /= 10;
		}
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
