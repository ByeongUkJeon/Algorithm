/*
#include<stdio.h>
#include<stdlib.h>
int main() {
	char * dial[8];
	char input[16] = { 0 };
	int i = 0, x = 0, t = 0, y;
	for (int i = 0; i < sizeof(dial) / 4; i++) {
		dial[i] = (char *)malloc(sizeof(char) * 5);
	}

	while (x < 8) {

		dial[x][i] = 65 + x*3;
		dial[x][i + 1] = 66 + x*3;
		dial[x][i + 2] = 67 + x*3;
		dial[x][i + 3] = '\0';
		x = x + 1;
	}

	dial[7][3] = 'Z';
	dial[7][4] = '\0';
	fgets(input, 16, stdin);
	for (i = 0; i < 16; i++) {
		for (x = 0; x < 8; x++) {
			for (y = 0; y < 4; y++) {
				if (input[i] == dial[x][y]) {
					if (input[i] == '\0') {
						continue;
					}
					t = t + x + 3;
				}
			}
		}
	}
	printf("%d\n", t);

	return 0;

}*/

#include <stdio.h>
#include <string.h>
int main()
{
	int sum = 0, number;
	int t[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	char string[16];
	scanf("%s", string);
	for (int i = 0; string[i] != 0; i++)
	{
		sum += t[string[i] - 'A'];
	}
	printf("%d", sum);

	return 0;
}