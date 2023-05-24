#include<stdio.h>
#include<string.h>
int main() {
	int T, score = 0, len, current;
	char * str;
	scanf("%d ", &T);
	for (int i = 0; i < T; i++) {
		current = 1;
		str = (char *)malloc(sizeof(char) * 81);
		fgets(str, 81, stdin);
		len = strlen(str);
		for (int t = 0; t < len; t++) {
			if (str[t] == 'O') {
				if (t == 0) score += 1;
				else if (str[t - 1] == 'O') {
					current += 1;
					score += current;
				}
				else if (str[t - 1] == 'X') {
					current += 1;
					score += current;
				}
				else continue;
			}
		}
		current = 1;
		printf("%d\n", score);
		score = 0;
	}
	return 0;
}