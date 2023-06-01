#include<stdio.h>
#include<string.h>
int main() {
	char input[101] = { 0 };
	int count = 0;
	char *alp[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

	scanf("%s", input);
	for (int i = 0; i < strlen(input); i++) {
		for (int x = 0; x < 8; x++) {
			if (input[i] == 'd' && input[i + 1] == 'z' && input[i + 2] == '=') {
				count = count + 2;
				i = i + 2;
			}
			else if (alp[x][0] == input[i] && alp[x][1] == input[i + 1]) {
				if (input[i] == 'd' && input[i + 1] == 'z') {
					continue;
				}
				count = count + 1;
				i = i + 1;
			}
		}
	}
	printf("%d\n", strlen(input) - count);

	return 0;
}