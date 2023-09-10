#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N, front = 0, rear;
	vector <int> v;
	cin >> N;
	rear = N - 1;
	for (int i = 1; i <= N; i++) {
		v.push_back(i);
	}
	while (front != rear) {
		front++;
		v.push_back(v[front]);
		rear++;
		front++;
	}
	cout << v[v.size() - 1];
	
}