#include<stdio.h>

int main() {
	int a, cnt = 0, res = 0, arr[10];

	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		arr[i] = arr[i] % 42;
	}
	for (int i = 0; i < 10; i++) {
		cnt = 0;
		if (i == 9) break;
		for (int j = i+1; j < 10; j++) {
			if (arr[i] == arr[j]) cnt++;
		}
		if (cnt == 0)  res++;
	}
	printf("%d\n", res+1);
	return 0;

}