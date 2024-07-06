#include<stdio.h>
// two beer or not two beer

void f1(); //two
void f2();  // or
void f3(); // not
void f4(); // beer

int main()
{
	/*
	f1();
	f4();
	f2();
	f3();
	f1();
	f4();
	*/
	//============Var 2=========
	f1();
	f2();
	return 0;
}

void f1()
{
	printf(" two");
	f4();
}

void f4()
{
	printf(" beer");
}

void f2()
{
	printf(" or");
	f3();
	f1();
}

void f3()
{
	printf(" not");
}
//main f6
//main f1 -> f4 -> f5 ->f6











