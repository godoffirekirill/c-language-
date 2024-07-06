#include <stdio.h>

void whoIsGreater(int a, int b);
void isPozitive(int a);
int sumOrSubst(int a, int b, int c);
void alcohol(int age, int hour);
void isPozitivAdv(int a);

int main() {
	int a = 12, b = 12, c = 1;
	whoIsGreater(a, b);
	isPozitive(a);
	printf("%d\n", sumOrSubst(a, b, c));
	int age = 21, hour = 22;
	alcohol(age, hour);
	isPozitivAdv(a);
	return 0;
}

void whoIsGreater(int a, int b) {
	a > b ? printf("%d\n", a) : printf("%d\n", b);

}
void isPozitive(int a) {
	a > 0 ? printf("positive\n") : printf("negative\n");
}

int sumOrSubst(int a, int b, int c) {

	return c > 0 ? a + b : a - b;
}
void alcohol(int age, int hour) {
	age >= 21 && (hour >= 10 && hour <= 23) ?
			printf("Enjoy\n") : printf("Sorry\n");

}
void isPozitivAdv(int a) {
	a == 0 ?
			printf("zero\n") :
			(a > 0 ? printf("positive\n") : printf("negative\n"));

}
