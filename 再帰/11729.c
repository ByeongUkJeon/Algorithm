#include<stdio.h>
#include<math.h>
void hanoi(int N, char A, char B, char C) {

	if (N == 1) {
		printf("%c %c\n", A, C);
	}
	else {
		hanoi(N - 1, A, C , B);
		printf("%c %c\n", A, C);
		hanoi(N - 1, B, A, C);
	}
}
int main() {
	int N;
	scanf("%d", &N);
	printf("%.0lf\n", (pow(2, N) - 1));
	hanoi(N, '1', '2', '3');

	return 0;
}


