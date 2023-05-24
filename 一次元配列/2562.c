#include<stdio.h>

int main() {
	int arr[9], max, i = 0;

	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		scanf("%d", &arr[i]);
	}
	max = arr[0];

	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("%d\n", max);
	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		if (arr[i] == max)
			break;
	}
	printf("%d\n", i+1);
}