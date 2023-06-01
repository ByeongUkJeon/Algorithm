#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char S[20] = { 0 };
	int T, R, y;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d", &R);
		scanf("%s", S);
		y = 0;
		while (y < strlen(S)) {
			for (int x = 0; x < R; x++) {
				printf("%c", S[y]);
			}
			y = y + 1;
		}

		printf("\n");
	}
	return 0;

}