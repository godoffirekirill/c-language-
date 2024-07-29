#include<stdio.h>
#include <math.h>

void print_abc_reverse(int from, int to);
void sandglassUp();
void sandglassDown(void);


	int main(){

	print_abc_reverse(65, 74);
		 sandglassUp();

		 sandglassDown();

	return 0;
	}

	void print_abc_reverse(int from, int to) {

		int columns = 3;

		for(; from < to; to--) {
			printf("%c", to);
			if(to % columns == 0) printf("\n");
		}


	}
	void sandglassDown(void) {
		int row = 9;
		int i, j;
        for(i = 0; i <row; i++){
                 for(j = 0; j < row + i; j++){
                     if( j < row - i - 1)
                     printf(" ");
                     else printf("$");
                 }
                 printf("\n");
             }
	}

	void sandglassUp() {
		int row = 9;
		int i, j;
		   for (i = 0; i < row; i++) {
		        for (j = 0; j < row + (row - 1); j++) {
		            if (j < i) {
		                printf(" ");
		            } else if (j < row + (row - 1) - i) {
		                printf("$");
		            }
		        }
		        printf("\n");
		    }
	}




