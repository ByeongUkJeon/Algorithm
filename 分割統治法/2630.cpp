#include<iostream>
#include<vector>
int blue = 0, white = 0;
using namespace std;
vector<vector<int>> v;
vector<int> v2;
void divide(int N, int x, int y) {
	if (N == 1) {
		if (v[x][y] == 1) {
			blue++;
			return;
		}
		else if (v[x][y] == 0) {
			white++;
			return;
		}
	}
	for (int i = x; i < x + N; i++) {
		for (int j = y; j < y + N; j++) {
			if (v[x][y] != v[i][j]) {
				divide(N / 2, x, y);
				divide(N / 2, x + N / 2, y);
				divide(N / 2, x, y + N / 2);
				divide(N / 2, x + N / 2, y + N / 2);
				return;
			}
		}
	}
	if (v[x][y] == 1) {
		blue++;
	}
	else if (v[x][y] == 0){
		white++;
	}

	return; 
}

int main() {
	int N, M;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> M;
			v2.push_back(M);
		}
		v.push_back(v2);
		v2.clear();
	}
	divide(N, 0, 0);
	cout << white << endl << blue << endl;
}