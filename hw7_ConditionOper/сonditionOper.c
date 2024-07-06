#include<stdio.h>
	void fan (int mode);
	void medtest(int puls, int age);
	void amPm(float hour);
/*
 60 => 100%
 x => 78%
 x = 60*78/100.
 */
	int main(){
			int mode = 4;
			fan(mode);
			int age =-45, pulse = 60;
			medtest(pulse, age);
			float hours = 24.78;
			amPm(hours);

			int a=1, b=2, c=-3;
			if(a>b>c) {
				printf("True\n");
			} else {
				printf("False\n");
			}
			a = 1; b=1;
			c = a || --b;  // a=1, b=1, c=1
			printf("%d, %d, %d\n", a,b,c);
			int d = a-- && --b; //a=0, b=0, c=1,d=0

			printf("%d, %d, %d, %d\n", a,b,c,d);

			int i = 43;
			printf("%d", printf("%d", printf("%d",i))); //4321


		return 0;
}

	void fan (int mode){
		if(mode < 1 || mode > 4){
			printf("Wrong mode\n");
			return;
		}
		if(mode == 1){
			printf("Off\n");
			return;
		}
		if(mode == 2){
					printf("Low\n");
					return;
				}
		if(mode == 3){
					printf("Middle\n");
					return;
				}
		if(mode == 4){
					printf("High\n");
					return;
				}
	}

	void medtest(int puls, int age){

		if(age < 0 || age > 120 || puls<40 || puls > 260) {
			printf("Wrong data\n");
			return;
		}
		if( age <35 && puls < 120 ||
				age<=55 && puls < 110 ||
				puls < 100){
			printf("Medical test passed!\n");
		} else {
			printf("Medical test failed!\n");
		}
	}

	void amPm(float hour){
		//11.87  15.991245
		int min = (hour - (int)hour)*100;
		if(hour < 0. || hour >= 24. || min >59){
			printf("Wrong time\n");
		}
		if( hour < 12.0)
		{
			printf("am\n");
		}
			else {
				printf("pm\n");
			}
	}
