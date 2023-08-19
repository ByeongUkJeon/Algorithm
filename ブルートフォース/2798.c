#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main() {
	int * ary, * sum, N, M, near = 300000, p = 0, q = 0;

	scanf("%d %d", &N, &M);
	ary = (int *)malloc(sizeof(int) * N);
	sum = (int *)malloc(sizeof(int) * (N*N*N));
	memset(sum, 0, sizeof(int) * (N*N*N));
	for (int i = 0; i < N; i++) {
		scanf("%d", &ary[i]);
	}
	for (int x = 0; x < N; x++) {
		for (int y = x + 1; y < N; y++) {
			for (int z = y + 1; z < N; z++) {
				if (ary[x] + ary[y] + ary[z] > M) {
					continue;
				}
				else sum[p] = ary[x] + ary[y] + ary[z] - M;
				p = p + 1;
			}
		}
	}
	while (p > q) {
		if ( near > abs(sum[q])) {
			near = abs(sum[q]);
		}

		q= q + 1;
	}
	printf("%d\n", M - near);
	return 0;
}