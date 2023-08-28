#include<iostream>
#include<unordered_set>
using namespace std;

int main() {
	unordered_set<int> A;
	int a, b, t, cnt = 0, sum = 0;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		cin >> t;
		A.insert(t);
	}
	for (int i = 0; i < b; i++) {
		cin >> t;
		if (A.find(t) != A.end()) {
			cnt++;
		}
	}
	sum = (a - cnt) + (b - cnt);
	cout << sum;
}