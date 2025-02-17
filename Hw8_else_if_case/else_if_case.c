#include<stdio.h>

int delayTime(float hour);
int delayOnCity(int city);
int delayOnYear(int year);
int timeOnRoute(int pureTime,float hour, int city, int year);


int main() {
//	delayTime(8.20);
//	printf("%d", delayTime(7.30));
	timeOnRoute(10,8,1,1995);

//	delayOnYear(2021);
	return 0;
}

int delayTime(float hour) {
	int min = (hour - (int)hour)*100;
		if(hour < 0. || hour >= 24. || min >59){
			printf("Wrong time\n");
			return (int)-1;
		}
	if (hour > 7 && hour <= 9) {
		printf("delay 20 min\n");
		return (int)20;

	} else if (hour > 9 && hour < 11) {
		printf("delay 10 min\n");
		return (int)10;

	} else if (hour > 11 && hour < 13) {
		printf("delay 5 min\n");
		return (int)5;

	} else {
		printf("delay 0 min\n");
		return (int)0;

	}

	return (int)0;

}

int delayOnCity(int city) {
	switch (city) {
	case 1:
		printf("Jerusalem delay 20 min\n");
		return 20;
		break;
	case 2:
		printf("Tel-Aviv delay 35 min\n");
		return 35;
		break;
	case 3:
		printf("Beer-Shevadelay 15 min\n");
		return 15;
		break;
	case 4:
		printf("Haifa delay 25 min\n");
		return 25;
		break;
	default:
		printf("Wrong city\n");
		return -1;
		break;
	}

	return 0;
}

int delayOnYear(int year){
	if (year < 1950 || year > 2022) {
		printf("Wrong year");
		return -1;
	}

	if (year <= 1995) {
		printf("delay 15 min\n");
		return 15;
	} else if (year > 1995 && year < 2005) {
		printf("delay 10 min\n");
		return 10;
	} else if (year > 2005 && year < 2017) {
		printf("delay 5 min\n");
		return 5;
	} else if (year > 2017 && year < 2022) {
		printf("delay 0 min\n");
		return 0;
	}
	return 0;
}
int timeOnRoute(int pureTime,float hour, int city, int year) {
	int min = (pureTime - (int)pureTime)*100;
			if(pureTime < 0. || pureTime >= 24. || min >59){
				printf("Wrong time\n");
				return -1;
			}
	if ((int)delayOnYear(year) == -1 || (int)delayTime(hour) == -1 || (int)delayOnCity(city) == -1) {
		printf("Wrong route, time or year bus\n");
		return 0;
	}


	int fullTime = (pureTime + (int)delayTime(hour) + (int)delayOnCity(city) + (int)delayOnYear(year));
	return  printf("Full time on route %d min\n",fullTime);
}



