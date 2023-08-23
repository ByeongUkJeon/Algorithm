#include<stdio.h>
#include<stdlib.h>
int main() {
	int N;
	int temp;
	scanf("%d", &N);
	int * ary = (int*)malloc(sizeof(int) * (N + 1));
	for (int i = 0; i < N; i++) {
		scanf("%d", &ary[i]);
	}
	for (int x = 0; x < N; x++) {
		for (int y = 0; y < N; y++) {
			if (ary[x] < ary[y]) {
				temp = ary[y];
				ary[y] = ary[x];
				ary[x] = temp;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		printf("%d\n", ary[i]);
	}

	return 0;
}