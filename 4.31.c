#include <stdio.h>

int main() {
	int n = 9;

	int space = n / 2;

	for (int i = 1; i <= n; i += 2) {
		for (int j = 1; j <= space; j++) {
			printf(" ");
		}

		for (int j = 1; j <= i; j++) {
			printf("*");
		}

		printf("\n");
		space--;
	}

	space = 1;

	for (int i = n - 2; i >= 1; i -= 2) {
		for (int j = 1; j <= space; j++) {
			printf(" ");
		}

		for (int j = 1; j <= i; j++) {
			printf("*");
		}

		printf("\n");
		space++;
	}

	return 0;
}
