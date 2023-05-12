#include<stdio.h>

int main() {
	int n, a = 1;

	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		a = a + i;
	}
	printf("%d\n", a);
}