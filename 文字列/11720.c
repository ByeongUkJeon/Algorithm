#include<stdio.h>
#include<stdlib.h>
int main() {
	int N, sum = 0;
	char a;
	char * ary;
	scanf("%d\n", &N);

	ary = (char *)malloc(sizeof(char) * N+1);

	scanf("%s", ary);

	for (int i = 0; i < N; i++) {
		sum += ary[i] - 48;
	}
	printf("%d\n", sum);


}