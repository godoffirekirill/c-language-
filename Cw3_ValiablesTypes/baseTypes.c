#include<stdio.h>

int main() {

	char c;
	printf("%d", c);
	c = 125;
	printf("%d", c);

	float f = 3.14;

	printf("PI = %f\n", f);
	printf("PI = %.2f\n", f);
	printf("PI = %.1f\n", f);

	double d = 23.464;
	printf("Double = %.2f", d);
	//dont do this way
	printf("Double = %d", d); //double to int

	int x= 56;
			printf("X =%d\n",x);

	return 0;
}

