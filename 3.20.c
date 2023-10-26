#include<stdio.h>

int main() {

	int work_hour;
	double hourly_rate, salary;

	while (1) {

		printf("Enter # of hours worked (-1 to end):");
		scanf("%d", &work_hour);
		if (work_hour == -1) {
			break;
		}

		printf("Enter hourly rate of the worker ($00.00):");
		scanf("%lf", &hourly_rate);
		if (work_hour <= 40) {
			salary = work_hour * hourly_rate;
		}
		else {
			salary = work_hour * hourly_rate+(work_hour-40)*0.5*hourly_rate;
		}

		printf("Salary is $%.2lf\n\n", salary);


	}
}