#include <stdio.h>

int main() {

	int a = 62, b = 50, c;
	c = a > b;

	printf("%d > %d = %d\n", a,b,c);
	//62 > 50 = 1 1 true 0 false

	c = a < b;
	printf("%d < %d = %d\n", a,b,c);
	c = a>= b;
	printf("%d >= %d = %d\n", a,b,c);
	c = a<= b;
	printf("%d <= %d = %d\n", a,b,c);
	c = a== b;
	printf("%d == %d = %d\n", a,b,c);
	c = a != b;
	printf("%d != %d = %d\n", a,b,c);




	return 0;
}
