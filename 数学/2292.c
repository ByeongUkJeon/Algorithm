#include<stdio.h>

int main() {
	double N;
	int i = 0;
	scanf("%lf", &N);
	if (N == 1) {
		printf("1\n");
		return 0;
	}
	while (1) {
		if (N / (3 * i*i + 3 * i + 2) < 1) {
			printf("%d\n", i+1);
			break;
		}
		i = i + 1;
	}
	return 0;
}