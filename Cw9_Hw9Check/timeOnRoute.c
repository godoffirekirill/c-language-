#include<stdio.h>

int oddDigitsCount(int number);
int sumOddDigits(int number);
int xPower(int x, int power);
double xPowerAdv(int x, int power);

int main() {
	int n= -1385846;
	int res = oddDigitsCount(n);
	if(res != -1){
		printf("Count odd digits in %d = %d\n", n, res);
	}
	res = sumOddDigits(n);
	if(res != -1){
		printf("Sum odd digits in %d = %d\n", n, res);
	}
	int power = -4, x = 2;
	res = xPower(x,power);
	if(res){
		printf("%d power %d = %d\n", x, power, res);
	}
	double res1 = xPowerAdv(x, power);
	printf("%d power %d = %.3f\n", x, power, res1);

	return 0;
}

double xPowerAdv(int x, int power){
//	double res = 1.;
//	if( power > 0){
//		while(power !=0){
//			res *= x;
//			power--;
//		}
//		return res;
//	} else {
//		while(power !=0)
//		{
//			res *= x;
//			power++;
//		}
//		return 1/res;
//	}
	//=============Var.2==========
//	double res = 1.;
//	int temp = power;
//	if(temp < 0){
//		temp = -temp; // temp * -1
//	}
//	while(temp != 0){
//		res *= x;
//		temp --;
//	}
//	return power >0? res : 1/res;
	//==================Var.3===================
	return power > 0? xPower(x, power) : 1. / xPower(x ,-power);
}

int xPower(int x, int power){
	if(power < 0 || (power ==0 && x == 0)){
		printf("Wrong data\n");
		return 0;
	}
	int res = 1;
	while(power != 0){
		res *= x;
		power--;     //2^4 = 1*2 => 2(3); 2 * 2 = 4(2); 4 * 2 = 8(1); 8 * 2 = 16(0)
	}
	return res;
}

int sumOddDigits(int number){
	if(number < 0){
			printf("Wrong number\n");
			return -1;
		}
	int sum = 0;
	while(number != 0){
		if(number %2){
			int digit = number %10;
			sum += digit;
		}

		number /= 10;
	}
	return sum;
}

int oddDigitsCount(int number){
	if(number < 0){
		printf("Wrong number\n");
		return -1;
	}
	int count =0;
	while(number > 0){
		if(number %2 != 0){
			count ++;
		}
		number /= 10;
	}
	return count;
}
