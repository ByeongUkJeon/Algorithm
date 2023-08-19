#include<stdio.h>

int main() {
	int scale[2][51];
	int r[51] = { 0, };
	int N;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d %d", &scale[0][i], &scale[1][i]);
	}
	for (int p = 0; p < N; p++) {
		for (int q = 0; q < N; q++) {
			if (scale[0][p] > scale[0][q] && scale[1][p] > scale[1][q]) {
				r[q] = r[q] + 1;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		printf("%d ", r[i] + 1);
	}
	printf("\n");
	
	return 0;
}