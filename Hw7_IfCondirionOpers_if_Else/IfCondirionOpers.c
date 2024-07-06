#include <stdio.h>

void fan(int mode);
void medtest(int puls, int age);
void amPm(float hour);
void medtest2(int puls, int age);
int main() {
	 fan(3);
	 medtest(109,56);

	 amPm(20.00);

	return 0;
}

void fan(int mode){

	if (mode < 1 || mode > 4) {
			printf(" Wrong mode.\n");
			return;
		}
	if (mode == 1) {
		printf(" Off\n");
			return;
	}
	if (mode == 2) {
		printf(" Low\n");
		return;
	}
	if (mode == 3) {
		printf(" Middle\n");
		return;
	}
	if (mode == 4) {
		printf(" Hi\n");
		return;
		}

}

void medtest(int puls, int age){
	if ((age > 0 && age < 35) && (puls > 40 && puls < 120)){
		printf("Medical test passed !\n");
	} else if ((age >= 35 && age <= 55) && (puls > 40 && puls < 110)){
			printf("Medical test passed !\n");
		} else if ((age >= 55) && (puls > 40 && puls < 100)){
			printf("Medical test passed !\n");
		}
	else {
		printf("Medical test failed !\n");

	}

}
void medtest2(int puls, int age) {
	if (age < 0 || age > 120 || puls < 40 || puls > 260) {
		printf("Medical test failed !\n");

	}
	if(age < 35 && puls < 120 || age <= 55 && puls < 110 || age > 55 || puls < 100) {
		printf("Medical test passed !\n");

	} else {
		printf("Medical test failed !\n");
	}
}



void amPm(float hour){
	int min = (hour -(int)hour)*100;
	if(hour < 0. || hour >= 24. || min > 59) {
		printf("Wrong time !\n");

	}

	if(hour < 12.0){
		printf("AM !\n");

	} else {
		printf("PM !\n");

	}


}
