#include<stdio.h>

int main() {

	printf("(A)\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i+1; j++) {
			printf("%s", "*");
		}
		printf("\n");
	}

	printf("(B)\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10 - i; j++) {
			printf("%s", "*");
		}
		printf("\n");
	}

	printf("(C)\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i; j++) {
			printf("%s", " ");
		}
		for (int j = i; j < 10; j++) {
			printf("%s", "*");
		}
		printf("\n");
	}

	printf("(D)\n");
	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			printf("%s", " ");
		}
		for (int j = 0; j < i+1; j++) {
			printf("%s", "*");
		}
		
		printf("\n");
	}
}