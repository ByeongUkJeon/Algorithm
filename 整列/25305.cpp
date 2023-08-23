#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int N, k, x;
	vector<int> score;
	cin >> N >> k;
	for (int i = 0; i < N; i++) {
		cin >> x;
		score.push_back(x);
	}
	sort(score.rbegin(), score.rend());
	
	cout << score[k - 1];

}