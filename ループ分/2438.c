#include<stdio.h>
/*
int main() {
	int N;
	scanf("%d", &N);
	for (int x = 0; x < N; x++) {
		for (int i = 0; i <= x; i++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
} 2439¹ø
*/

int main() {
	int N;
	scanf("%d", &N);
	for (int x = 0; x < N; x++) {
		for (int y = N-1; y > x; y--)
			printf(" ");
		for (int i = 0; i <= x; i++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}