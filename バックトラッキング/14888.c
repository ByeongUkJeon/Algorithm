#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int N;
int ary[11] = { 0, };
int count[4] = { 0, };
int max = -1000000001; min = 1000000001;

void c(int k, int sum) {
	if (k == N) {
		if (sum > max) {
			max = sum;
		}
		if (min > sum) {
			min = sum;
		}
	}
	for (int i = 0; i < 4; i++) {
		if (count[i] > 0) {
			count[i] = count[i] - 1;
			if (i == 0) {
				c(k + 1, sum + ary[k]);
			}
			else if (i == 1) {
				c(k + 1, sum - ary[k]);
			}
			else if (i == 2) {
				c(k + 1, sum * ary[k]);
			}
			else {
				c(k + 1, sum / ary[k]);
			}
			count[i] = count[i] + 1;
		}
	}

}
int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &ary[i]);
	}
	for (int i = 0; i < 4; i++) {
		scanf("%d", &count[i]);
	}
	c(1, ary[0]);
	printf("%d\n%d\n", max, min);
	return 0;
}