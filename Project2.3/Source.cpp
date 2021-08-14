#include<stdio.h>
int main() {
	printf("Enter number : ");
	int a;
	int b;
	int c;
	scanf_s("%d", &a);
	for (b = 1; a >= b; b = b + 1) {
		printf("*");
	}
		printf("\n");
	for (b = 1; a - 1 > b; b = b + 1 ) {
		printf("*");
			for (c = 1; a - 1 > c; c = c + 1 ) {
				printf(" ");
			}
			printf("*\n");
	}
		for (b = 1; a >= b; b = b + 1) {
			printf("*");
		}
	return 0;
}