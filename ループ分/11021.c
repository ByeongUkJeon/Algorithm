#include<stdio.h>
/* 11021¹ø
int main() {
	int T, A, B;

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d\n", i + 1, A + B);
	}
	return 0;
} */

int main() { // 11022¹ø
	int T, A, B;

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d + %d = %d\n", i + 1, A, B, A + B);
	}
	return 0;
}