#include<stdio.h>
#include<string.h>
int main() {
	char num[11];
	char temp;
	scanf("%s", &num);

	if (num[0] == '0') {
		return 0;
	}
	for (int i = 0; i < strlen(num); i++) {
		for (int j = 0; j < strlen(num); j++) {
			if (num[i] > num[j]) {
				temp = num[j];
				num[j] = num[i];
				num[i] = temp;
			}
		}
	}
	for (int i = 0; i < strlen(num); i++) {
		printf("%c", num[i]);
	}


	return 0;
}