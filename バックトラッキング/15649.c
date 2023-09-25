#include<stdio.h>
int p[10];
int check[10];
int n, m;
void permutation(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++) {
			printf("%d ", p[i]);
		}
		printf("\n");
		return;
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (check[i] != 1) {
				p[k] = i;
				check[i] = 1;
				permutation(k + 1);
				check[i] = 0;
			}
		}
	}
}

int main() {

	scanf("%d %d", &n, &m);
	permutation(0);

	return 0;
}