#include <stdio.h>

int main() {

	int a = 42;
	int b = 5;
	float res;

	res = a + b;
	printf("res = %f\n", res);
	printf("res = %d\n", a + b);
	res = a - b;
	printf("res = %f\n", res);
	printf("res = %d\n", a - b);
	res = a * b;
	printf("res = %f\n", res);
	printf("res = %d\n", a * b);
	res = a * 1. / b;
	printf("res = %f\n", res);
	printf("res = %d\n", a / b);

	res = (float) a / b;
	printf("res = %.1f\n", res);
	printf("res = %d\n", a / b);

	char x = 127;
	printf("res = %d\n", x + 1000);

	res = a % b;
	printf("res = %.1f\n", res);
	printf("res = %d\n", a % b);

	res = res + 1;
	printf("res = %.1f\n", res);

	res += 1;
	printf("res = %.1f\n", res);

	res++;
	printf("res = %.1f\n", res);

	++res;
	printf("res = %.1f\n", res);
	printf("================\n");
	printf("res = %.1f\n", res++);
	printf("res = %.1f\n", res);

	return 0;
}

