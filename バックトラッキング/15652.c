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
			if (k >= 1) {
				if (p[k - 1] <= i) {
					p[k] = i;
					check[i] = 1;
					permutation(k + 1);
					check[i] = 0;
				}
			}
			else {
				p[k] = i;
				permutation(k + 1);
			}
		}
	}
}

int main() {

	scanf("%d %d", &n, &m);
	permutation(0);

	return 0;
}