#include<stdio.h>

int backOrder(int number);
int hasDigit(int number, int digit);
int countDigits(int number);
void printSum15();
int main(){

	/*
	 * Syntax:
	 for(oper1; oper2; oper3)
	 { some code}

	 oper1 - initialization
	 oper2 - condition
	 oper3 - loop step

	 */
	int i;
	for(i = 5; i >=0; i--){
		printf("i = %d\n", i);
	}
	//====================
	i = 50;
		for(; i >=0; i--){
			printf("i = %d\n", i);
		}

	//====================
		 i = 10;
			for(; i >=0; ){
				printf("i = %d\n", i--);
			}
			//====================
			i = 10;
						for(; ; ){
							printf("i = %d\n", i--);
							if(i < 0){
								break;
							}
						}
			int a, b;
			for(a =1, b = 0; a <=10||b <=100; a++, b +=10 ){
				printf("a = %d, b = %d \n", a, b);
			}
	printf("End of for loop and i = %d\n", i);
	int number = 13345;
	int res = backOrder(number);
	if(res != -1){
		printf("%d in back order = %d\n", number, res);
	}
	number = 100000;
	int digit = 0;
	res = hasDigit(number, digit);
	if(res !=-1)
		res? printf(" %d has digit %d \n", number, digit) :
				printf(" %d hasn't digit %d \n", number, digit);

	res = countDigits(number);
	if(res !=-1)
		 printf( "In %d is %d digits\n", number, res);

	printSum15();
		return 0;
}

void printSum15(){
	int num;
	for(num = 1000;  num <=9999; num++){
		int d1 = num / 1000;
		int d2 = (num/100) % 10;
		int d3 = (num/10) %10;
		int d4 = num % 10;
		if( d1+d2+d3+d4 == 15){
			printf("%d\n", num);
		}
	}
}

int countDigits(int number){
	if(number < 0)
		return -1;
	if(number == 0)
		return 1;
	int count;
	for(count = 0; number; number /= 10, count ++){
		continue;

	}
	return count;
}

int hasDigit(int number, int digit){
	if(number <0 || digit < 0 || digit >9)
	{
		printf("Wrong data\n");
		return -1;
	}

	if(number == digit)
				return 1;

	for(; number; number /= 10){
		if(number %10 == digit)
		{
			return 1;
		}
	}
	return 0;
}

int backOrder(int number){
	if(number < 0 || number %10 == 0){
		printf("Wrong data\n");
		return -1;
	}
		int res = 0;
		for(; number !=0; number/=10){
			res = res *10 + number % 10;
		}
		return res;
	}




