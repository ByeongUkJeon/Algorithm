#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, t, MAX = 0;
	vector<int> v;
	vector<int> mem(100001, 0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		v.push_back(t);
	}
	MAX = mem[0] = v[0];
	for (int i = 1; i < n; i++) {
		if (mem[i - 1] + v[i] > 0) {
			mem[i] += mem[i - 1] + v[i];
			if (mem[i] > MAX) {
				MAX = mem[i];
			}
		}
		else if (v[i] > mem[i-1]) {
			mem[i] += v[i];
			if (mem[i] > MAX) {
				MAX = mem[i];
			}
		}


	}
	cout << MAX;
}