#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n;
int start[100001] = { 0 };
int endd[100001] = { 0 };
int schedule() {
	vector<pair<int, int>> order;
	for (int i = 0; i < n; i++) {
		order.push_back(make_pair(endd[i], start[i]));
	}
	sort(order.begin(), order.end());

	int earliest = 0, selected = 0;
	for (int i = 0; i < order.size(); i++) {
		int meetingbegin = order[i].second;
		int meetingend = order[i].first;
		if (earliest <= meetingbegin) {
			earliest = meetingend;
			selected++;
		}
	}
	return selected;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	int s, e;
	for (int i = 0; i < n; i++) {
		cin >> s >> e;
		start[i] = s;
		endd[i] = e;

	}
	cout << schedule();
}