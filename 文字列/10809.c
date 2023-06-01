#include<stdio.h>
#include<stdlib.h>
int main() {
	char alp[26];
	int res[26];
	for (int i = 0; i < 26; i++) {
		alp[i] = 97+i;
		res[i] = -1;
	}
	char str[100] = { 0 };
	scanf("%s", str);
	for (int i = 0; i < 100; i++) {
		
		for (int x = 0; x < 26; x++) {
			if (str[i] == alp[x]) {
				res[x] = i;
				alp[x] = '0';
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", res[i]);
	}
	printf("\n");
	return 0;
}
