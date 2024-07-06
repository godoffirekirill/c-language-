#include<stdio.h>
	void markPrint(int mark);
	int main(){
		int mark = 42;
		markPrint(mark);
		return 0;
}

	void markPrint(int mark){
		switch (mark) {
		case 2+3:
		case 4:
			printf("Good\n");
			break;
		case 3:
			printf(" Not so bad\n");
			break;
		case 2:
			printf("Bad\n");
			break;
		default:
			printf("Wrong data!\n");
			break;
		}
		printf("End of function\n");
	}
