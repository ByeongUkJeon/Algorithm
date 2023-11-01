#include<iostream>
#include<vector>
#include<cstring>
#include<string>
bool uni = true;
using namespace std;
int N, stdv;
vector<vector<char>> v;
void divide(int n, int x, int y) {
	if (n == 1) {
		if (v[x][y] == '1') {
			cout << '1';
		}
		else
			cout << '0';
		
		return;
	}
	uni = true;
	stdv = v[x][y];
	for (int i = x; i < x + n; i++) {
		if (!uni) {
			break;
		}
		for (int j = y; j < y + n; j++) {
			if (stdv != v[i][j]) {
				uni = false;
				break;
			}
		}
	}
	if (v[x][y] == '1' && uni == true) {
		cout << '1';
	}
	else if(v[x][y] == '0' && uni==true)
		cout << '0';
	if (!uni) {
		cout << '(';
		divide(n / 2, x, y);
		divide(n / 2, x, y + n / 2);
		divide(n / 2, x + n / 2, y);
		divide(n / 2, x + n / 2, y + n / 2);
		cout << ')';
	}



	return;
}
int main() {
	string s;
	vector<char> v2;
	cin >> N;
	cin.ignore();

	for (int i = 0; i < N; i++) {
		s.clear();

		getline(cin, s);
		for (int j = 0; j < N; j++) {
			v2.push_back(s.at(j));
		}
		v.push_back(v2);
		v2.clear();
	}
	divide(N, 0, 0);
}