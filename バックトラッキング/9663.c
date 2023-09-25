#include<stdio.h>
int n, cnt = 0;
int checkcolumn[15];
int checkcrossminus[30];
int checkcrossplus[30];
void que(int k) {
	if (k == n) {
		cnt = cnt + 1;
		return;
	}
	else {
		for (int i = 0; i < n; i++) {
			if (checkcolumn[i] == 1 || checkcrossminus[i - k + n - 1] == 1 || checkcrossplus[i + k] == 1) {
				continue;
			}
			else {
				checkcolumn[i] = 1;
				checkcrossminus[i - k + n - 1] = 1;
				checkcrossplus[i + k] = 1;
				que(k + 1);
				checkcolumn[i] = 0;
				checkcrossminus[i - k + n - 1] = 0;
				checkcrossplus[i + k] = 0;
			}
		}
	}
}

int main() {
	scanf("%d", &n);
	que(0);
	printf("%d\n", cnt);
}