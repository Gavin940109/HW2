#include<stdio.h>

int main() {

	int length, width;
		
	printf("Enter length:");
	scanf("%d", &length);
	printf("Enter breath:");
	scanf("%d", &width);

	for (int i = 0; i < length; i++) {
		printf("\n");
		for (int j = 0; j < width; j++) {
			if (i == 0 || i == length-1 || j==0 || j==width-1) {
				printf("+");
			}
			else {
				printf(" ");
			}
			
		}
	}

}