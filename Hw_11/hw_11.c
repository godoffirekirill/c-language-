#include<stdio.h>

int isLuckyNumber(int number);

int countSubNumber(int number, int subNumber);

int main(){

    int number = 1234536;
    if (isLuckyNumber(number)) {
         printf("Lucky number.\n");
     } else {
         printf("Not a lucky number.\n");
     }

    int number1 = 3333523, subNumber = 33;
       printf("%d\n", countSubNumber(number1, subNumber));


	return 0;
}

int isLuckyNumber(int number) {
	int even = 0;
	int notEven =0;
	if (number < 10) {
		return 0;
	}
	for(; number > 0; number /= 10) {
		int digit = number % 10;

		if (digit % 2 == 0) {
			even += digit;
		} else {
			notEven += digit;
		}
	}
	if (even == notEven) {
		return 1;
	}

	return 0;
}

int countSubNumber(int number, int subNumber) {
	 int count = 0;
	 int divisor = 1;
	 int tempSubNumber = subNumber;

	  while (tempSubNumber != 0) {
	        divisor *= 10;
	        tempSubNumber /= 10;
	    }

	  while (number >= subNumber) {

	         if (number % *divisor == subNumber) {
	             count++;
	         }
	         number /= 10;
	     }

	     return count;

}

