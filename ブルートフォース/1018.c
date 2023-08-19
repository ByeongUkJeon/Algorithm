#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	int N, M, cnt = 0, x = 0, y = 0, p = 0, q = 0, min = 65, s = 0;
	char ** chess;
	scanf("%d %d", &N, &M);
	chess = (char **)malloc(sizeof(char *)* (N + 1));
	for (int i = 0; i < N; i++) {
		chess[i] = (char *)malloc(sizeof(char)* (M + 1));

	}
	for (x = 0; x < N; x++) {
		for (y = 0; y < M; y++) {
			scanf(" %c", &chess[x][y]);
		}

	}
	while (1) {
		cnt = 0;
		for (x = p; x < p + 8; x++) {
			for (y = q; y < q + 8; y++) {
				if ((x + p) % 2 == 0) {
					if ((y + q) % 2 == 0) {
						if (chess[x][y] != 'W') cnt = cnt + 1; // Çà Â¦ ¿­ Â¦
					}
					else if ((y + q) % 2 != 0) {
						if (chess[x][y] != 'B') cnt = cnt + 1; // Çà Â¦ ¿­ È¦
					}
				}
				else if ((x + p) % 2 != 0) {
					if ((y + q) % 2 == 0) {
						if (chess[x][y] != 'B') cnt = cnt + 1;
					}
					else if ((y + q) % 2 != 0) {
						if (chess[x][y] != 'W') cnt = cnt + 1;
					}
				}
			}
		}
		if (cnt < min) {
			min = cnt;
		}
		cnt = 0;
		for (x = p; x < p + 8; x++) {
			for (y = q; y < q + 8; y++) {
				if ((x + p) % 2 == 0) {
					if ((y + q) % 2 == 0) {
						if (chess[x][y] != 'B') cnt = cnt + 1; // Çà Â¦ ¿­ Â¦
					}
					else if ((y + q) % 2 != 0) {
						if (chess[x][y] != 'W') cnt = cnt + 1; // Çà Â¦ ¿­ È¦
					}
				}
				else if ((x + p) % 2 != 0) {
					if ((y + q) % 2 == 0) {
						if (chess[x][y] != 'W') cnt = cnt + 1;
					}
					else if ((y + q) % 2 != 0) {
						if (chess[x][y] != 'B') cnt = cnt + 1;
					}
				}
			}
		}
		if (cnt < min) {
			min = cnt;
		}
		q = q + 1;
		if (q > M - 8) {
			q = 0;
			p = p + 1;
		}
		if (p > N - 8) {
			break;
		}
	}


	printf("%d\n", min);
	return 0;

}