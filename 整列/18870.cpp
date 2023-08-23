#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main() {
	unordered_map<int, int> um;
	int N, t;
	vector<int> v, temp;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> t;
		v.push_back(t);
		temp.push_back(t);
	}
	sort(temp.begin(), temp.end());
	temp.erase(unique(temp.begin(), temp.end()), temp.end());

	for (int i = 0; i < temp.size(); i++) {
		um[temp[i]] = i;
	}
	for (int i = 0; i < N; i++) {
		cout << um[v[i]] << " ";
	}
}