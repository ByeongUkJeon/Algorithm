#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	vector<int> v(10001, 0);
	vector<int> mem(10001, 0);

	int n, t, m = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		v[i] = t;
	}
	mem[0] = v[0];
	mem[1] = v[0] + v[1];
	mem[2] = max(v[0] + v[2], v[1] + v[2]);
	mem[3] = v[3] + max(mem[1], v[0] + v[2]);
	m = max(mem[3], mem[2]);
	for (int i = 4; i < n; i++) {
		t = max(mem[i - 2], mem[i - 3] + v[i - 1]);
		t = max(mem[i - 4] + v[i - 1], t);
		mem[i] = t + v[i];
		if (mem[i] > m) {
			m = mem[i];
		}
	}
	cout << m;
}