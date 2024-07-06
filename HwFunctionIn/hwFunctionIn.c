#include <stdio.h>

float percent(float a, float per);
float circleLength(float radius);
float housePrice(int area, float price);
float salary(float hours, float wage, float bonus);
float cashe(float kg, float price, float discount);



float const PI = 3.14;

int main() {
	float a = 300, per = 25.;
	printf("%.2f percent from %.2f = %.2f\n", per, a, percent(a, per));
	float rad = 60;
	printf("Length of circle with radius %.2f = %.2f\n", rad,
			circleLength(rad));
	int area = 120;
	float price = 12000;
	printf("House Price = %.2f\n", housePrice(area, price));
	float hours = 120, wage = 100, bonus = 25.0;
	printf("Salary with bonus = %.2f\n", salary(hours, wage, bonus));
	float kg = 2.5, pricePerKg = 7.90, discount = 25;
	printf("Amount to pay = %.2f\n", cashe(kg,pricePerKg,discount));
	return 0;
}

float percent(float a, float per) {

	return a * per / 100;
}

float circleLength(float radius) {

	return 2 * PI * radius;
}

float housePrice(int area, float price) {

	return area * price;
}

float salary(float hours, float wage, float bonus) {

	float bonusMoney = percent(hours * wage, bonus);

	return hours * wage + bonusMoney;
}

float cashe(float kg, float price, float discount) {
	float priceWithDiscount = percent(price, discount);
	return kg *(price - priceWithDiscount);
}
