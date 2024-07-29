#include<stdio.h>

int evenDigitsCountDoWhile(int number);
	int main(){
//Styntax:
		/*
		 do
		 {
		 some code
		 }
		 while(condition);
		 */

		int x = 10;
		while(x != 10){
			printf("Hello from while loop\n");
		}

		do{
			printf("Hello from doWhile loop\n");
		} while (x != 10);

		int number = 5456789;
		//number = 0;
		printf(" res = %d\n", evenDigitsCountDoWhile(number));
		return 0;
}

	int evenDigitsCountDoWhile(int number){
		int count = 0;
		do{
			if(! (number %2) )
			{
				count ++;
			}
			number /= 10;
		} while (number != 0);
		return count;
	}
