#include<iostream>
#include<vector>
using namespace std;
vector<vector <int>> d;
int one = 0, minu = 0, zero = 0;
void divide(int x, int y, int n) {
	if (n == 1) {
		if (d[x][y] == 1) {
			one++;
			return;
		}
		else if (d[x][y] == 0){
			zero++;
			return;
		}
		else {
			minu++;
			return;
		}
	}
	int a = 0;
	int standard = d[x][y];
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (standard != d[i][j]) {
				a = 1;
				break;
			}
		}
	}
	if (a) {
		divide(x, y, n / 3);

		divide(x + n / 3, y, n / 3);
		divide(x + (n / 3) * 2, y, n / 3);

		divide(x, y + n / 3, n / 3);
		divide(x, y + (n / 3) * 2, n / 3);

		divide(x + (n / 3), y + (n / 3), n / 3);
		divide(x + (n / 3), y + (n / 3) * 2, n / 3);
		divide(x + (n / 3) * 2, y + (n / 3), n / 3);
		divide(x + (n / 3) * 2, y + (n / 3) * 2, n / 3);	
	}
	else {
		if (d[x][y] == 1) {
			one++;
			return;
		}
		else if (d[x][y] == 0) {
			zero++;
			return;
		}
		else {
			minu++;
			return;
		}
	}
}
int main() {
	int N, t;
	cin >> N;
	for (int i = 0; i < N; i++) {
		vector<int> v;
		for (int j = 0; j < N; j++) {
			cin >> t;
			v.push_back(t);
		}
		d.push_back(v);
		
	}
	divide(0, 0, N);
	cout << minu << endl << zero << endl << one << endl;
	
}