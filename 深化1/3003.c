#include<stdio.h>

int main() {
	int K, Q, L, B, N, P;

	scanf("%d %d %d %d %d %d", &K, &Q, &L, &B, &N, &P);

	K = 1 - K;
	Q = 1 - Q;
	L = 2 - L;
	B = 2 - B;
	N = 2 - N;
	P = 8 - P;
	printf("%d %d %d %d %d %d\n", K, Q, L, B, N, P);
	return 0;

}