#include<stdio.h>
int b = 42;
int const N_NUMBER = 5;
void function();

int main()
{
	function();
	//printf("%d", a);
	b = 100500;
	printf("%d\n", b);
	//N_NUMBER = 37;
	return 0;
}

void function()
{
	printf("Hello\n");
//	int a = 12;
	b = 456;
	printf("%d\n", b);
}

void function1()
{
	printf("Follow white rabbit\n");

}

