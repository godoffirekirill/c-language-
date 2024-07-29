#include<stdio.h>

int isLuckyNumberPiter(int number);
int countSubNumber(int number, int subNumber);
int countDigits(int number);
int xPower(int x, int power);

	int main(){
		int num = 333345667;   //19 20
		int res = isLuckyNumberPiter(num);
		if(res!= -1)
			printf(res? "You are lucky\n" : "It's not your day\n");

		int sNum = 33;
		res = countSubNumber(num, sNum);
		if(res != -1)
			printf("%d\n", res);
		return 0;
}

	int countSubNumber(int number, int subNumber){
		if(number < 0 || subNumber < 0){
			printf("Wrong data\n");
						return -1;
		}
		if(subNumber > number)
			return 0;
		int nDigits = countDigits(subNumber);
		int divider = xPower(10, nDigits);

		int countSubNum = 0;

		for(; number; number /=10){
			if(number%divider == subNumber)
				countSubNum++;
		}
		return countSubNum;
	}


	int xPower(int x, int power){
		if(power < 0 || (power ==0 && x == 0)){
			printf("Wrong data\n");
			return 0;
		}
		int res = 1;
		while(power != 0){
			res *= x;
			power--;
		}
		return res;
	}


	int countDigits(int number){
			//32165/ 10 = 3216,5 => 3216 /10 -= 321.6 => 321 /10
			if(number == 0)
				return 1;
			int count = 0;
			while(number != 0){
				number /= 10;
				count ++;
			}
			return count;
		}

	int isLuckyNumberPiter(int number){
		if(number <= 10){
			printf("Wrong data\n");
			return -1;
		}
		int res = 0;
					for(;number!=0; number/=10){
						if(number%2)
							res += number%10;
						else res -= number%10;
					}

					return res==0;
	}
