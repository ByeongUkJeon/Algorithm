#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() { // 0 TRUE : 소수 O , 1 FALSE : 소수 X
	int* eratos;
	int n, cnt = 0;
	eratos = (int *)malloc(sizeof(int) * 300000);
	memset(eratos, 0, sizeof(int) * 300000);
	while (1) {
		scanf("%d", &n);
		if (n == 0) break;
		if (n == 1) {
			printf("%d\n", 1);
			continue;
		}


		cnt = 0;
		for (int i = 2; i * i < (n * 2); i++) {
			if (eratos[i] == 0) {
				for (int x = i * i; x <= (n * 2); x = x + i) {
					eratos[x] = 1;
				}
			}
		}
		for (int i = n + 1; i < (n * 2); i++) {
			if (eratos[i] == 0) {
				if (i == 1) continue;
				cnt = cnt + 1;
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}