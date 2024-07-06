#include<stdio.h>
/*
  if(condition1)
  { some code }
  else if(condition2)
  { some code}
  ***************
  else if(condition n)
  {some code}
  else
  {some code}
 */
	void compare(int a);
	float netto(float salary);

	int main(){

		compare(7);
		float sal = 30000;
		printf("%.2f", netto(sal));

		return 0;
}

	float netto(float salary){
		/*
		 *<= 5000 => 13%
		 *5001 - 10000 => 15%
		 *10001 - 15000 => 20%
		 *>15001 => 25%
		 */

		if( salary < 0.) {
			printf("Wrong data\n");
			return 0;
		}
		float tax;
		if(salary <=5000){
			tax = salary*0.13;
		} else if (salary <=10000){
			tax = salary * 0.15;
		}else if(salary <= 15000){
			tax = salary * 0.2;
		}else{
			tax = salary * 0.25;
		}
		return salary - tax;
	}



	void compare(int a) {
//		if( a > 0) {
//			printf("Positive\n");
//		}
//		else {
//		if (a == 0)	{
//			printf("Zero\n");
//		} else {
//			printf("negative\n");
//		}
//		}
		if(a > 0) {
			printf ("Positive\n");
		}
		else if ( a == 0){
			printf("Zero\n");
		}
		else if (a < 0){
			printf("Negative\n");
		}
	}
