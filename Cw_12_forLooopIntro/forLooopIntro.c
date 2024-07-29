#include<stdio.h>
#include <math.h>

void pithagorus(void);
void malevich(int row);
void David(void);
void chessboard(void);

int main(void){
        pithagorus();
      //  malevich(9);
        //David();
    //    chessboard();
        return 0;
}

void chessboard(void){
        int i, j;
        for(i = 0; i < 40; i++){
            for(j = 0; j < 40; j++){
                if(((i/5) % 2 == 0 && (j/5) %2 !=0) || ((i/5) %2 !=0 && (j/5) %2 == 0))
                    printf("# ");
                    else
                        printf("  ");
            }
            printf("\n");
        }
    }

    void malevich(int row){
        int i, j;
        for(i = 0; i <row; i++){
            for(j = 0; j < row; j++){
                if(i==0 || i==row-1 || j ==0 || j == row-1 || i==j || j == row-i-1 )
                printf("#");
                else printf(" ");
            }
            printf("\n");
        }
    }

void David(void) {

        int n;
        printf("please enter EVEN number: ");
        fflush(stdout);
        scanf("%d", &n);

        if (n % 2 != 0 || n<10) {
            printf("Wrong number! Try again!");
            return;
        }

        int i, j;
        int m = sqrt(n * n - (n / 2) * (n / 2));
        int k = m / 3;

        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (i == k || (j + i == n + k && j > n / 2) || (i == j + k - 1 && j
                        <= n / 2) || i == n / 2 || j == i + n / 2 || j + i == n / 2
                        + 1) {
                    printf(".");
                } else
                    printf(" ");
            }
            printf("\n");
        }

    }
void pithagorus(void){
        int i, j;
                for(i = 1; i <=10; i++){
                    for(j =1; j <=10; j++){
                        printf("%d\t", i*j);
                    }
                    printf("\n");
                }
    }
