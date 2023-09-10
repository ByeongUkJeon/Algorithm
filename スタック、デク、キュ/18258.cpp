#include<iostream>
#include<string>
#include<cstring>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int> q;
	int N, t, front = 0, rear = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		if (s == "push") {
			cin >> t;
			q.push_back(t);
			rear++;
		}
		else if (s == "pop") {
			if (front == rear) {
				cout << "-1" << '\n';
				continue;
			}
			cout << q[front] << '\n';
			front++;
		}
		else if (s == "size") {
			cout << rear - front << '\n';
		}
		else if (s == "empty") {
			if (rear == front) cout << "1" << '\n';
			else cout << "0" << '\n';
 		}
		else if (s == "front") {
			if (front == rear) {
				cout << "-1" << '\n';
			}
			else {
				cout << q[front] << '\n';
			}
		}
		else if (s == "back") {
			if (front == rear) {
				cout << "-1" << '\n';
			}
			else {
				cout << q[rear - 1] << '\n';
			}
		}
	}
}