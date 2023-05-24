#include<stdio.h>

int main() {
	int N;
	int M;
	double sum = 0;
	double *exam;

	scanf("%d", &N);
	exam = (double*)malloc(sizeof(double) * N);
	for (int i = 0; i < N; i++)	
		scanf("%lf", &exam[i]);

	M = exam[0];

	for (int i = 0; i < N; i++)
		if (exam[i] > M) M = exam[i];
	for (int i = 0; i < N; i++)
		exam[i] = exam[i] * 100 / M;
	for (int i = 0; i < N; i++) {
		sum += exam[i];
	}
	printf("%lf\n", (double)(sum/N));
}