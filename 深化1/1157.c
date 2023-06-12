#include<stdio.h>
#include<string.h>
#define N 1000000
int main() {
	char S[N] = { 0 };
	char alp[52];
	int res[26] = { 0, };
	int max = 0, maxcount = 0, maxposition;

	for (int i = 0; i < 26; i++) {
		alp[i] = 65 + i;
	}
	scanf("%s", S);
	for (int i = 0; i < N; i++) {
		if (S[i] > 90) S[i] = S[i] - 32;
		for (int x = 0; x < 26; x++) {
			if (S[i] == alp[x]) {
				res[x] = res[x] + 1;
			}
		}
	}


	for (int x = 0; x < 26; x++) {
		if (max < res[x]) {
			max = res[x];
		}
	}
	for (int x = 0; x < 26; x++) {
		if (max == res[x]) {
			maxcount = maxcount + 1;
			maxposition = x;
		}
	}
	if (maxcount == 1) {
		printf("%c\n", alp[maxposition]);
	}
	else
		printf("?\n");

	return 0;

}