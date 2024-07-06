#include <stdio.h>

	int main(){

	//	condition ?  operation 1 : operation 2
		int a = 1,  b = 10, c;
	// condition
		c = a != b || a >0?  printf("Hello\n") : printf ("Bye\n");

		a == b? printf("Equals\n") : a > 0 && b > 0? printf("Positive\n") : printf("Not Positive\n");
		printf("%d\n", c);
		return 0;
	}
