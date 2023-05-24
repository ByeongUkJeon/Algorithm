#include<stdio.h>
#include<stdlib.h>

int main() {
	int C, N;
	int * arr;

	scanf("%d", &C);

	for (int i = 0; i < C; i++) {
		double sum = 0, average, rate = 0;
		scanf("%d", &N);
		arr = (int *)malloc(sizeof(int) * N);
		int x = 0;
		for (int t = 0; t < N; t++) {
			scanf("%d", &arr[t]);
		}
		for (int t = 0; t < N; t++) {
			sum += arr[t];
		}
		average = sum / N;
		for (int t = 0; t < N; t++) {
			if (arr[t] > average) {
				rate = rate + 1;
			}
		}
		printf("%.3lf%%\n", (rate / N)*100);
	}
	return 0;
}