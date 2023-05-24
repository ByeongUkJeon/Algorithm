#include<stdio.h>

int main() {
	int A, B, C, res, arr[100], cnt;
	char count[100];
	scanf("%d %d %d", &A, &B, &C);
	res = A * B * C;
	int i = 0;
	while (res != 0) {
		arr[i] = res % 10;
		res = res / 10;
		i++;
	}


	for (int y = 0; y < 10; y++) {
		cnt = 0;
		for (int x = 0; x < i; x++) {
			if (arr[x] == y)
				cnt++;
		}
		printf("%d\n", cnt);
	}

	return 0;
}