#include<stdio.h>

int main() {
	int N, min, max;
	int *arr;
	scanf("%d", &N);
	arr = (int *)malloc(sizeof(int)*N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	min = arr[0];
	max = arr[0];
	for (int i = 0; i < N; i++) {
		if (arr[i] > max)
			max = arr[i];
		else if (arr[i] < min)
			min = arr[i];
	}
	printf("%d %d", min, max);
	return 0;
}