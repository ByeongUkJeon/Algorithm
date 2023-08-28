#include<iostream>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	unordered_map<string, int> m;
	vector<string> answer;
	int N, M, cnt = 0;
	string t;
	cin >> N >> M;
	cin.clear();
	for (int i = 0; i < N; i++) {
		cin >> t;
		m.insert({ t , 1});
	}
	for (int i = 0; i < M; i++) {
		cin >> t;
		m[t]++;
	}
	for (pair<string, int> elem : m) {
		if (elem.second == 2) {
			cnt++;
			answer.push_back(elem.first);
		}
	}
	cout << cnt << "\n";
	sort(answer.begin(), answer.end());
	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << "\n";
	}
}