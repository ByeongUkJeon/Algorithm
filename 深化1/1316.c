#include<stdio.h>
#include<string.h>
int main() {
	int N, i = 0, x = 0, count;
	char alp[26] = { 0 };
	int alpc[26] = { 0, };
	char arr[101] = { 0 };
	scanf("%d", &N);
	count = N;
	for (i = 0; i < 26; i++) {
		alp[i] = 97 + i;
	}
	for (i = 0; i < N; i++) {
		int alpc[27] = { 0, };
		scanf("%s", arr);
		for (x = 0; x < strlen(arr); x++) {
			for (int y = 0; y < 26; y++) {
				if (arr[x] == alp[y]) {
					alpc[y] = alpc[y] + 1;
				}
			}
		}
		for (x = 0; x < strlen(arr); x++) {
			for (int y = 0; y < 26; y++) {
				if (alp[y] == arr[x]) { // ��
					if (alpc[y] == -1) { // ��� ����� ���ĺ��� �����ٸ�
						count = count - 1; // ����
						x = strlen(arr); // �ݺ��� ���Ḧ ���� ����
						continue; // �ݺ��� Go
					}
					else if (arr[x] != arr[x + 1]) { // �������� ������
						alpc[y] = -1; // �� ���ĺ��� ��� ����
					}
				}
			}
		}
	}
	printf("%d\n", count);

	return 0;
}