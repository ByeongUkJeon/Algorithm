#include<stdio.h>

int constr(int N) {
	int i, sum = 0, temp;
	for (i = 0; i < N; i++) {
		temp = i;
		while (i > 0) {
			sum = sum + i % 10;
			i = i / 10;
		}
		i = temp;
		if ((i + sum) == N) {
			return i;
		}
		sum = 0;
	}
	return 0;
}

int main() {
	int N;

	scanf("%d", &N);
	printf("%d\n", constr(N));

	return 0;
}