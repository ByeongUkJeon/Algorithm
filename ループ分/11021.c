#include<stdio.h>
/* 11021��
int main() {
	int T, A, B;

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d\n", i + 1, A + B);
	}
	return 0;
} */

int main() { // 11022��
	int T, A, B;

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d + %d = %d\n", i + 1, A, B, A + B);
	}
	return 0;
}