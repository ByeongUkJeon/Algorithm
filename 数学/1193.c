#include<stdio.h>

int main() {
	int i = 0, sum, a, b, seq;
	double N;

	scanf("%lf", &N);

	while (1) {
		if (N / ( 0.5 * i * i + 1.5 * i + 2) < 1) {
			break;
		}
		i++;
	}
	seq =(int)N - (0.5 * (i-1) * (i-1) + 1.5 * (i-1) + 2);
	sum = i + 2;
	while (1) {
		
		if (sum % 2 == 0) { // ¦��, a ���� b ����
			b = 1;  a = sum - b;
			for (int x = 0; x < seq; x++) {
				a = a - 1; b = b + 1;
			}
			printf("%d/%d\n", a, b);
			break;
		}
		else if (sum % 2 != 0) { // Ȧ��, a ���� b ����
			a = 1; b = sum - a;
			for (int x = 0; x < seq; x++) {
				a = a + 1; b = b - 1;
			}
			printf("%d/%d\n", a, b);
			break;
		}
	}
	return 0;
} 