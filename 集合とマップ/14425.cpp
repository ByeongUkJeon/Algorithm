#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unordered_map<string, int>words;

	int N, M, sum = 0;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		words.insert(make_pair(s, 0));
	}
	for (int i = 0; i < M; i++) {
		string s;
		cin >> s;
		if (words.find(s) != words.end()) {
			words.at(s)++;
		}
	}
	
	for (auto it = words.begin(); it != words.end(); it++) {
		sum += it->second;
	}
	cout << sum;
}