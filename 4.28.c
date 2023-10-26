#include<stdio.h>
#include<math.h>

int main(){

	int paycode, work_hour,num,a;
	double hourly_rate, salary, tot_sal,wk_sale;

	while (1) {
		printf("Enter your paycode(1 is Managers, 2 is Hourly, 3 is commission, 4 is pieceworkers):");
		scanf("%d", &paycode);

		switch (paycode){
		
		case 1:
			printf("Your weekly salary is $100\n\n");
		break;

		case 2:
			printf("Enter # of hours worked :");
			scanf("%d", &work_hour);
			printf("Enter hourly rate of the worker ($00.00):");
			scanf("%lf", &hourly_rate);

			if (work_hour <= 40) {
				salary = work_hour * hourly_rate;
			}
			else {
				salary = work_hour * hourly_rate + (work_hour - 40)*1.5*hourly_rate;
			}

			printf("Your weekly salary is $%.2lf\n\n", salary);
		break;

		case 3:
			printf("Enter your gross weekly sales:");
			scanf("%lf", &wk_sale);
			tot_sal = 250 + wk_sale * 0.057;
			printf("Your weekly salary is $%.2lf\n\n", tot_sal);
		break;

		case 4:
			printf("Enter the numbers you sale:");
			scanf("%d", &num);
			a = num * 100;
			printf("Your weekly salary is $%d\n\n", a);
		}
	
	}
}