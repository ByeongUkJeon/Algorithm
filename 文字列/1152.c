#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 1000001
int main() {
	int count = 0;
	char str[N] = { 0 };
	fgets(str, N, stdin);
	if (str[0] == '\n') {
		printf("%d\n", count);
		return 0;
	}
	for (int i = 0; i < N; i++) {
		if (str[i] == ' ') {
			if (i == 0) {
				continue;
			}
			else if (str[i + 1] == '\n') {
				break;
			}
			else count = count + 1;
		}
	}
	if ((strlen(str) == 2) && (str[0] == ' '))
		printf("%d\n", count);

	else
		printf("%d\n", count+1);

	return 0;
}