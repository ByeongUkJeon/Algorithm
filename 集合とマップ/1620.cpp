#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
unordered_map<int, string> pokemon;
unordered_map<string, int> pokemon2;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;
	string t;
	cin >> N >> M;
	cin.clear();
	for (int i = 1; i <= N; i++) {
		cin >> t;
		pokemon.insert({ i, t });
		pokemon2.insert({ t, i });
	}

	for (int i = 0; i < M; i++) {
		cin >> t;
		if (t[0] - '0' > 0 && t[0] - '0' <= 9) {
			int n = stoi(t);
			auto item = pokemon.find(n);
			cout << item->second << "\n";
		}
		else {
			auto item = pokemon2.find(t);
			cout << item->second << "\n";
		}
	}
}