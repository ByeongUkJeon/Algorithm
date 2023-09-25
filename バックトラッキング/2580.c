#include<stdio.h>
#include<stdlib.h>
int i, cnt = 0;
int check[9][9] = { 0, };
int sd[9][9];
int check_row(int r, int c, int num) {
	for (int i = 0; i < 9; i++) {
		if (sd[i][c] == num) {
			return 0;
		}
	}
	return 1;
}
int check_column(int r, int c, int num) {
	for (int i = 0; i < 9; i++) {
		if (sd[r][i] == num) {
			return 0;
		}
	}
	return 1;
}
int check_33(int r, int c, int num) {
	int row = r - (r % 3);
	int col = c - (c % 3);
	for (int i = row; i < row + 3; i++) {
		for (int j = col; j < col + 3; j++) {
			if (sd[i][j] == num) {
				return 0;
			}
		}
	}
	return 1;
}
int possible(int r, int c, int num) {
	if (check_row(r, c, num) && check_column(r, c, num) && check_33(r, c, num)) {
		return 1;
	}
	return 0;
}
void sdoku(int k) {
	if (k == 81) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				printf("%d ", sd[i][j]);
			}
			printf("\n");
		}
		exit(0);
	}
	int r = k / 9;
	int c = k % 9;
	if (sd[r][c] != 0) {
		sdoku(k + 1);
	}
	else {
		for (int j = 1; j <= 9; j++) {
			if (possible(r, c, j)) {
				sd[r][c] = j;
				sdoku(k + 1);
				sd[r][c] = 0;
			}
		}
		
	} 
}

int main() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &sd[i][j]);
			if (sd[i][j] != 0) {
				check[i][j] = 1;
				cnt = cnt + 1;
			}
		}
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (sd[i][j] != 0) {
				check[i][j] = 1;
			}
		}
	}
	sdoku(0);

	return 0;
}