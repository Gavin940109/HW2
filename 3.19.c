#include<stdio.h>

int main() {

	double principal, rate, days,charge;

	while (1){

		printf("Enter loan principal(-1 to end):");
		scanf("%lf", &principal);
		if (principal == -1) {
			break;
		}

		printf("Enter interest rate:");
		scanf("%lf", &rate);

		printf("Enter term of the loan in days:");
		scanf("%lf", &days);

		charge = principal * rate*days / 365;

		printf("The interest charge is $%.2lf\n\n", charge);

	}
}