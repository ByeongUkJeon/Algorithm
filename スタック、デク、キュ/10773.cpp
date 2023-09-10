#include<iostream>
#include<vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int K;
	long long sum = 0, t;
	vector<long long> v;

	cin >> K;
	for (int i = 0; i < K; i++) {
		cin >> t;
		if (t == 0) {
			sum -= v[v.size() - 1];
			v.pop_back();
			continue;
		}
		v.push_back(t);
		sum += t;
	}

	cout << sum << '\n';
}