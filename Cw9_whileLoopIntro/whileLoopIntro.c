#include<stdio.h>
/*
 *Sintax:
  while(condition)
  { some code }
 */
int countDigits(int number);
void printStars(int stars, int columns);
int countEvenDigits(int number);

/*
  Loon Algorithm
  7 6 5 4 3 2 1 0
  3 4 4 4 5 7 8 1            7
  3 8 4 8 5 5 8 2
43
43%10 = 3
10 - 3 = 7
 */

	int main(){
		int count = 0;
		while(1){
			printf("True ");
			count ++;
			if(count == 10)
				break;
		}

		int a = 0;
		while(a <5) {
			printf("a = %d\n", a);
			a++;
		}
		printf("\nEnd of loop\n");

		int number = 456789123;
		printf("in %d is %d digits\n", number, countDigits(number));
		printf("in %d is %d even digits\n", number, countEvenDigits(number));
		int stars =57, col = 6;
		printStars(stars, col);
		return 0;
}

	int countEvenDigits(int number){
		int count = 0;
		if(number ==0)
		{
			return 1;
		}
		while(number != 0){
			if(number % 2 == 0){
				count++;
			}
			number /= 10;
		}
		return count;
	}

	void printStars(int stars, int columns){
		int count = 0;
		while(count < stars){
			printf("* ");
			count++;
			if(count % columns == 0){
				printf("\n");
			}
		}
		printf("\n");
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
