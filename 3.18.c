#include<stdio.h>

int main() {

	double dollar, salary;

	while (1) {

		printf("Enter sales in dollars(-1 to end):");
		scanf("%lf", &dollar);
		if (dollar == -1) {
			break;
		}
		
		salary = 0.09*dollar + 200;

		printf("Salary is: %.2lf\n\n", salary);

	}
}