#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> score;
int mem[301] = { 0 };
int main() {
	int t;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		score.push_back(t);
	}
	mem[0] = score[0];
	mem[1] = score[0] + score[1];
	mem[2] = max((score[0] + score[2]), (score[1]+score[2]));

	for (int i = 3; i < n; i++) {
		mem[i] = max(mem[i - 2] + score[i], mem[i - 3] + score[i - 1] + score[i]);
	}
	cout << mem[n-1];
	
}