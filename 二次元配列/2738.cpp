#include<iostream>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int A[101][101] = { 0 };

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int t;
			cin >> t;
			A[i][j] = t;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int t;
			cin >> t;
			A[i][j] += t;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}
}