#include <stdio.h>

void taxi(int regNumber);
void time24to12(int hour);
int main() {

	int a = 10;
	if (a >= 10) {
		a = 5;
		printf("%d\n", a);
	}
	printf("%d\n", a);

		taxi(3);

		int c = -11;
		if(c > 10) {
			printf("Hello\n");
		}
		else {
			printf("Buy\n");
		}
		printf("Another code\n");

		time24to12(13);

	return 0;
}

void time24to12(int hour){
	if(hour < 12 || hour > 24) {
		printf("Error\n");

	}
	if (hour > 12) {
		printf("%d pm\n", hour -12);

	} else {
		printf("%d am\n", hour);

	}
}


void taxi(int regNumber) {
	// 1=> Vasya go 2 => saraa go 3 =. ambram go || give me another driver

	if (regNumber < 1 || regNumber > 3) {
		printf(" give me another driver\n");
		return;
	}
	if (regNumber == 1) {
		printf("Vasya go\n");
		return;

	}
	if (regNumber == 2) {
		printf("saraa go\n");
		return;

	}
	if (regNumber == 3) {
		printf("ambram go\n");
		return;

	}
}
