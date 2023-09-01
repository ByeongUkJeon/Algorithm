#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;
	cin >> M >> N;

	vector<int> temp(N+1, 1);

	for (int i = 2; i <= N; i++) {
		if (temp[i]) {
			for (int j = i*2; j <= N; j += i) {
				if (temp[j]) {
					temp[j] = 0;
				}

			}
		}
	}
	for (int i = M; i <= N; i++) {
		if (i == 1) {
			continue;
		}
		if (temp[i]) {
			cout << i << "\n";
		}
	}
}