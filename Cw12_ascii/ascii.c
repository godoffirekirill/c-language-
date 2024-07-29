#include<stdio.h>

void printAscii();

	int main(){

		char c = 65;
		int i = 200;
		printf("c as symbol: %c, c as number: %d\n", c, c);
		printf("i as letter: %c, i as number: %d\n", i, i);

		c = 'D';
		printf("c as symbol: %c, c as number: %d\n", c, c);

		c = ' ';
		printf("c as symbol: %c, c as number: %d\n", c, c);

		c = '\n';

		printf("c as symbol: %c, c as number: %d\n", c, c);

		printAscii();
		return 0;
}

	void printAscii(){
		short c;
		int columns = 4;
		for(c =32; c <=127; c++){
			printf("%15d -> %c", c,c);
			if(c % columns == 0) printf("\n");
		}
	}
