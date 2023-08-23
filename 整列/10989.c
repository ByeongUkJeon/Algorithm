#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_NUM 10000
int main() {
	int count[10001] = { 0, };
	int sum[10001] = { 0, };
	int N, n;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &n);
		count[n]++;
	}

	for (int i = 0; i <MAX_NUM + 1; i++) {
		if (i == 0) sum[0] = count[0];
		else
			sum[i] = sum[i-1] + count[i];
	}

	for (int i = 0; i < MAX_NUM + 1; i++) {
		if (count[i] != 0) {
			printf("%d\n", i);
			count[i] = count[i] - 1;
			sum[i] = sum[i] - 1;
			i = i - 1;
		}
	}

	return 0;
}