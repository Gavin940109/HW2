#include <stdio.h>

int main() {
	int num=0;
	double  bin_blance, tot_char, tot_cre, cre_lim,new_blance;
	
	while (1) {
			
		printf("Enter acount number (-1 to end):");
		scanf("%d",&num);
		if (num == -1){
			break;
		}
		
		printf("Enter beginning blance:");
		scanf("%lf", &bin_blance);
		
		printf("Enter total charges:");
		scanf("%lf", &tot_char);
		
		printf("Enter total credits:");
		scanf("%lf", &tot_cre);
		
		printf("Enter credit limit:");
		scanf("%lf", &cre_lim);
		
		new_blance = bin_blance + tot_char - tot_cre;

		if (new_blance > cre_lim) {
			printf("Account:%d", num);
			printf("\nCredit limit:%.2lf", cre_lim);
			printf("\nBlance:%.2lf", new_blance);
			printf("\nCredit Limit Exceeded.\n\n");
		}

	}
}