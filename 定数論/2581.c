#include<stdio.h>
#include<stdlib.h>
int main() {
	int M, N, a, x, b = 0, sum = 0;
	int * ary;

	scanf("%d %d", &M, &N);
	ary = (int *)malloc(sizeof(int) * N);
	for (int i = M; i < N + 1; i++) {
		a = 1; x = 0;
		while (i >= a) {
			if (i % a == 0) {
				x = x + 1;
			}
			a = a + 1;
		}
		if (x == 2) {
			ary[b] = i;
			sum = sum + i;
			b = b + 1;
		}
	}
	if (sum == 0) printf("-1\n");
	else printf("%d\n%d\n", sum, ary[0]);

	return 0;
}