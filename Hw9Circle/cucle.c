#include<stdio.h>


int xPower(int x, int power);
int oddDigitsCount(int number);

int sumOddDigits(int number);

int main() {

	int y = xPower(2,0);
	printf("%d \n",y);
	int x = sumOddDigits(7);
	printf("%d \n",x);
	int z = oddDigitsCount(110);
	printf("%d \n",z);


	return 0;
}

int sumOddDigits(int number) {
    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 != 0) {
            sum += digit;
        }
        number /= 10;
    }
    return sum;
}

int oddDigitsCount(int number) {
    int count = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 != 0) {
            count++;
        }
        number /= 10;
    }
    return count;
}








int xPower(int x, int power) {
	if (x <=0 ) {
		return 0;
	}
	if (power < 0) {
		return 0;
	}
	int result = 1;
	while (power != 0) {
		result *= x;
		power -= 1;
	}

	return result;
}
