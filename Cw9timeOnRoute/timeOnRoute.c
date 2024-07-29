#include<stdio.h>

int delayTime(float hour);
int delayOnCity(int city);
int delayOnYear(int year);
int timeOnRoute(int pureTime,float hour, int city, int year);

int main() {
		int pureTime = 40, city = 4, year = 2019;
		float hour = 16.00;
		int res = timeOnRoute(pureTime, hour, city, year);
		if(res !=-1)
			printf("Time on route: %d hour and %d min\n", res /60 , res%60);
	return 0;
}

int timeOnRoute(int pureTime,float hour, int city, int year){
	int delYear = delayOnYear(year);
	int delTime = delayTime(hour);
	int delCity = delayOnCity(city);
	if(pureTime <=0 || delYear == -1 || delTime ==-1 || delCity ==-1)
		return -1;
	return pureTime + delYear + delCity + delTime;
}

int delayOnYear(int year){

	switch (year) {
		case 1950 ... 1995:
			return 15;
		case 1996 ... 2005:
					return 10;
		case 2006 ... 2017:
					return 5;
		case 2018 ... 2022:
					return 0;
		default:
			printf("Wrong year\n");
			return -1;
	}
}

int delayOnCity(int city) {
	switch (city) {
	case 1:
		return 20;
	case 2:
		return 35;
	case 3:
		return 15;
	case 4:
		return 25;
	default:
		printf("Wrong city\n");
		return -1;
	}
}

int delayTime(float hour)
{
	int hours = hour;
	int min = (hour - hours) * 100;
	if (hour < 0. || hour > 24. || min > 59) {
		printf("Wrong time\n");
		return -1;
	}
		if (hour <= 9. && hour > 7.) {
			return 20;
		} else if (hour > 9. && hour < 11.) {
			return 10;
		} else if (hour >= 11. && hour < 13.) {
			return 5;
		} else {
			return 0;
		}
	}

