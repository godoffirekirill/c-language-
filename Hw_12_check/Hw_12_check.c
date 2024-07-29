#include<stdio.h>

void print_abc_reverse(int from, int to);
void sandglassUp();
void sandglassDown();
int const SIZE = 12;

	int main(){
		int from = 65, to = 75;
		print_abc_reverse(from, to);
		sandglassUp();
		sandglassDown();
		return 0;
}
	void sandglassDown(){
			int i, j;
			for(i = 0; i < SIZE; i++){
				for(j = 0; j < SIZE; j++){
					if(i == 0 || i == SIZE-1
							|| i == j || j == SIZE-1 -i
							|| j < i && j > SIZE-1-i)
						printf("* ");
					else
						printf("  ");

				}
				printf("\n");
			}
		}
	void sandglassUp(){
		int i, j;
		for(i = 0; i < SIZE / 2; i++){
			for(j = 0; j < SIZE; j++){
				if(i == 0 || i == SIZE-1
						|| i == j || j == SIZE-1 -i
						|| j > i && j < SIZE-1-i)
					printf("* ");
				else
					printf("  ");

			}
			printf("\n");
		}
	}


	void print_abc_reverse(int from, int to)  {
		if(to > 127 || from < 32 || from > to)
		{
			printf("Wrong data\n");
			return;
		}
		int count = 1;

		for(; from <= to; to --, count ++){
			printf("%c\t", to);
			if(count % 3 == 0)
				printf("\n");
		}
		printf("\n");
	}
