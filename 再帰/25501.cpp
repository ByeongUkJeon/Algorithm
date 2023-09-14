#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string S;
	int T, res;
	int cnt;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cnt = 0;
		cin >> S;
		int j, l = S.length() - 1;
		for (j = 0; j <= l; j++, l--) {
			cnt++;
			if (S[j] != S[l]) {
				res = 0;
				break;
			}
			res = 1;
		}
		if ((res && S.length() % 2 == 0)) {
			cnt++;
		}
		cout << res << " " << cnt << "\n";
	}
}