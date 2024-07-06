#include <stdio.h>

int main() {

	int a = 42, b = 56, c;

	c = a > 0 || b < 0 || a == b;
	printf("%d %d %d\n", a, b, c);

	c = a == 4 || b != 10 || a != b;

	printf("%d %d %d\n", a, b, c);

	c = a > 0 && b > 0 && b == a;
	printf("%d\n", c);

	c = a > 0 || b != 3 && b == a;

	printf("%d\n", c);
		// 1		0			0
	c = a > 0 && (b == 3 || b == a);

	printf("%d\n", c);

	int y = 6;
					// x >=  0
					y >= -5 && y <= 5;

					// x < 0
					y > 5 || y < -5;

	return 0;
}
