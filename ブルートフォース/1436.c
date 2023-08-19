#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	int N, i = 0, n = 0, x = 665, y = 0;
	int ary[10001] = { 0, };
	char * end = { "666" };
	char compare[20] = { 0, };
	char com[20] = { 0, };
	scanf("%d", &N);
	
	while (1) {
		x = x + 1;
		n = x;
		while (n > 0) {
			compare[i] = n % 10 + '0';
			i = i + 1;
			n = n / 10;
		}
		i = 0;
		while (i < strlen(compare)) {
			com[i] = compare[strlen(compare)-1-i];
			i = i + 1;
		}

		i = 0;
		if (strstr(com, end) != NULL) {
			ary[y] = atoi(com);
			y = y + 1;
			if (y == 10000) {
				break;
			}
		}
	}
	printf("%d\n", ary[N-1]);
	return 0;
}