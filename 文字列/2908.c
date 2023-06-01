#include<stdio.h>
#include<stdlib.h>
char* reverse(char *ary) {
	char temp;
	temp = ary[0];

	ary[0] = ary[2];
	ary[2] = temp;

	return ary;
}
int main() {
	char ary1[10] = { 0 };
	char ary2[10] = { 0 };
	int a1 = 0, a2 = 0;

	scanf("%s", ary1);
	scanf("%s", ary2);

	reverse(ary1);
	reverse(ary2);

	a1 = atoi(ary1);
	a2 = atoi(ary2);

	if (a1 > a2)
		printf("%d\n", a1);
	else printf("%d\n", a2);
}