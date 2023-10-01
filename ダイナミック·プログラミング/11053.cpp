#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int N;
vector<int> v;
int mem[1001] = { 0 };
int LIS(int k) {
	if (mem[k+1] != 0) {
		return mem[k + 1];
	}
	mem[k + 1] = 1;
	for (int i = k + 1; i < N; i++) {
		if (k == -1 || v[k] < v[i]) {
			mem[k + 1] = max(mem[k + 1], LIS(i) + 1);
		}
	}
	return mem[k + 1];
}
int main() {
	int t, max = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> t;
		v.push_back(t);
	}
	for (int i = 0; i < N; i++) {
		t = LIS(i);
		if (t > max) {
			max = t;
		}
	}
	cout << max;
}