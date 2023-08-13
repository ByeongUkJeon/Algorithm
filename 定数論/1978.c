#include<stdio.h>

int main() {
	int N, num, cnt = 0, a, x;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		x = 0;
		a = 1;
		while (a <= num) {
			if (num % a == 0) {
				x = x + 1;
			}
			a = a + 1;
		}
		if (x == 2) cnt = cnt + 1;
	}
	printf("%d\n", cnt);

	return 0;
} 