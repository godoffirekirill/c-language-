#include <stdio.h>


int vasily();
float izik();
double sara();
int main() {

	float myArnak;

	myArnak = vasily();
	printf("in my pocket: %.2f\n", myArnak);
	//myArnak = myArnak + izik();
	myArnak += izik();


	printf("in my pocket: %.2f\n", myArnak);
	myArnak += sara();
	printf("in my pocket: %.2f\n", myArnak);


	return 0;
}

int vasily() {
	return 50;
}

float izik() {
	return 25.5;
}
double sara() {
	float saraCash = 123.4;
//	float res = saraCash/10;
	return saraCash/10;
}

