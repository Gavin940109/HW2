#include<stdio.h>
#include<math.h>

int main() {
	
	double a,as,asr;

	for (int i = 0; i < 5;i++) {

		a = 0.1 + 0.005*i;
		as = pow(1+a, 15);
		asr = 5000 * as;
		a = a * 100;
		printf("the interest of %.0lf percent rate:%lf\n", a,asr);
	}
		
	
}