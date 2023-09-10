#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main() {
	vector<int> v;
	queue<int> q;
	int N, K;
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		q.push(i + 1);
	}
	while (v.size() < N) {
		for (int i = 0; i < K - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		v.push_back(q.front());
		q.pop();
	}
	cout << '<';
	for (int i : v) {
		if (i == v[N-1]) {
			cout << i;
			break;
		}
		cout << i << ", ";
	}
	cout << '>';
}