#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int mem[1001][1001] = { 0 };
int main() {
	int n, t, floor = 1, y, temp = 1;
	int sum = 0, MAX;
	cin >> n;
	vector<vector <int>> v;
	vector <int> v2;
	for (int x = 0; x < n; x++) {
		y = temp;
		for (y; y > 0; y--) {
			cin >> t;
			v2.push_back(t);
		}
		v.push_back(v2);
		v2.clear();
		temp++;
	}
	if (n == 1) {
		cout << v[0][0];
		return 0;
	}
	mem[0][0] = v[0][0];
	MAX = v[0][0];
	mem[1][0] = v[1][0] + mem[0][0];
	mem[1][1] = v[1][1] + mem[0][0];
	for (int x = 2; x < n; x++) {
		for (y = 0; y <= x; y++) {
			mem[x][y] = v[x][y] + max(mem[x-1][y-1], mem[x-1][y]);
		}
	
	}
	for (int i = 0; i < n; i++) {
		for (y = 0; y < n * 2; y++) {
			MAX = max(MAX, mem[i][y]);
		}
	}
	cout << MAX;
}