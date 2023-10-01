#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int mem[1001][2002] = { 0 };
int main() {
	bool R = true, G = true, B = true;
	int N, rgb = 0, MIN = 1000001;
	std::cin >> N;
	vector<vector <int>> v;
	vector<int> v2;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> rgb;
			v2.push_back(rgb);
		}
		v.push_back(v2);
		v2.clear();
	}

	mem[0][0] = v[0][0], mem[0][1] = v[0][1], mem[0][2] = v[0][2];
	for (int i = 1; i < N; i++) {
		v[i][0] += min(v[i - 1][1], v[i - 1][2]);
		v[i][1] += min(v[i - 1][0], v[i - 1][2]);
		v[i][2] += min(v[i - 1][0], v[i - 1][1]);
	}
	for (int i = 0; i < 3; i++) {
		MIN = min(MIN, v[N - 1][i]);
	}
	cout << MIN << endl;;
}	